//1201201149 山下周一郎
#include<stdio.h>
int N=5;

struct Hope{
  int NO[5];
  int Goal;
  int count1;
  int count2;
};

int main(void){
int i,j,k,l;

  struct Hope Student[5] ={
    {{2,1,4,3,0},5,5,5},
    {{3,1,4,2,0},5,5,5},
    {{2,1,0,4,3},5,5,5},
    {{0,2,1,4,3},5,5,5},
    {3,0,1,2,4,5,5,5}
  };
  struct Hope Room[5] ={
    {{0,3,2,1,4},5,5,5},
    {{4,1,2,0,3},5,5,5},
    {{3,2,0,4,1},5,5,5},
    {{3,2,4,1,0},5,5,5},
    {{3,2,0,1,4},5,5,5}
  };

  printf("学生の志望\n");
  for(i=0;i<N;i++){
    printf("学生%d:%d %d %d %d %d\n",i,Student[i].NO[0],Student[i].NO[1],Student[i].NO[2],Student[i].NO[3],Student[i].NO[4]);
  }
  printf("\n");
  printf("研究室の志望\n");
  for(int i=0;i<N;i++){
    printf("研究室%d:%d %d %d %d %d\n",i,Room[i].NO[0],Room[i].NO[1],Room[i].NO[2],Room[i].NO[3],Room[i].NO[4]);
  }
  printf("\n");


  for(i=0;i<N;i++){
    for(k=i+1;k<N;k++){
      if(Student[i].NO[0]==Student[k].NO[0]){
        Student[i].count1=Student[i].NO[0];
        Student[k].count1=Student[k].NO[0];
      } 
    }
  }
  for(i=0;i<N;i++){
    if(Student[i].count1==5){
      Student[i].Goal=Student[i].NO[0];
      Room[Student[i].NO[0]].Goal=i;
    }
  } 

  for(i=0;i<N;i++){
    if(Student[i].Goal==5){
      for(k=0;k<N;k++){
        if(i==Room[Student[i].count1].NO[k]){
          Student[i].count2=k;
        }
      }
    }
  }
  for(i=0;i<N;i++){
    for(k=0;k<N;k++){
      if(Student[k].count1==i)
        for(j=k+1;j<N;j++){
          if(Student[j].count1==i){
            if(Student[k].count2>Student[j].count2){
              Student[j].Goal=Student[j].count1;
              Room[Student[j].count1].Goal=j;
            } else if(Student[k].count2<Student[j].count2){
              Student[k].Goal=Student[k].count1;
              Room[Student[k].count1].Goal=k;
            }
          }
        }
    }
  }

  for(i=1;Student[0].Goal==5||Student[1].Goal==5||Student[2].Goal==5||Student[3].Goal==5||Student[4].Goal==5;i++){

    for(j=0;j<N;j++){
      Student[j].count1=5;
    }

    for(j=0;j<N;j++){
      if(Student[j].Goal==5)
        for(k=j+1;k<N;k++){
          if(Student[k].Goal==5)
          if(Student[j].NO[i]==Student[k].NO[i]){
            Student[j].count1=Student[j].NO[i];
            Student[k].count1=Student[k].NO[i];
          }
        }
    }

    for(j=0;j<N;j++){
    if(Student[j].Goal==5&&Student[j].count1==5){
      Student[j].Goal=Student[j].NO[i];
      }
    }

    for(j=0;j<N;j++){
      if(Student[j].count1!=5){
      for(k=0;k<N;k++){
        if(j==Room[Student[j].count1].NO[k]){
          Student[j].count2=k;
        }
      }
      } else if(Student[j].count1==5){
        for(l=0;l<N;l++){
          if(j==Room[Student[j].Goal].NO[l]){
            Student[j].count2=l;
          }
        }
      }
    }
    for(j=0;j<N;j++){
      for(k=0;k<N;k++){
        if(Student[k].count1==j&&Student[k].Goal==5){
          for(l=k+1;l<N;l++){
            if(Student[l].count1==j&&Student[l].Goal==5){
              if(Student[k].count2>Student[l].count2){
                Student[l].Goal=Student[l].count1;
                Room[j].Goal=l;
                Student[k].Goal=5;
              } else if(Student[k].count2<Student[l].count2){
                Student[k].Goal=Student[k].count1;
                Room[j].Goal=k;
                Student[l].Goal=5;
              }
            }
          }
        }
        if(Student[k].count1==j&&Room[j].Goal!=5){
          if(Student[k].count2<Student[Room[j].Goal].count2){
            Student[k].Goal=Student[k].count1;
            Student[Room[j].Goal].Goal=5;
            Room[j].Goal=k;                        
          } 
        }
      }
    }

  }

  printf("研究室と学生の組み合わせ\n");
  for(i=0;i<N;i++){
    printf("学生%d --  研究室%d\n",i,Student[i].Goal);
  }
  return 0;
}