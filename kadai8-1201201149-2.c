//1201201149 山下周一郎
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int i;

int max(int *a,int b);
int min(int *a,int b);
double ave(int *a,int b);
double var(int *a,int b);
double med(int *a,int b);

int main(void){
  int *a,number;
  printf("配列の要素数を入力してください.\n");
  printf("要素数:"); scanf("%d",&number);

  a=(int*)malloc(sizeof(int)*number);
  srand((unsigned int)time(NULL));

  for(i=0;i<number;i++){
    a[i]=rand()%99+1;
    printf("a[%d]=%d\n",i,a[i]);
  }

  printf("最大値は%d,\n最小値は%d,\n平均値は%f,\n分散は%f,\n中央値は%f\n",max(a,number),min(a,number),ave(a,number),var(a,number),med(a,number));
  
  free(a);
  return 0;

}

int max(int *a,int b) {
  int MAX=a[0];
  for(i=1;i<b;i++){
    if(MAX<a[i]){
    MAX=a[i];
    }
  }
  return MAX;
}

int min(int *a,int b) {
  int MIN=a[0];
  for(i=1;i<b;i++){
    if(MIN>a[i]){
    MIN=a[i];
    }
  }
  return MIN;
}

double ave(int *a,int b) {
  double AVE=0;
  for(i=0;i<b;i++){
    AVE+=a[i];
  }
  AVE=AVE/b;
  return AVE;
}

double var(int *a,int b) {
  double AVE=0,VAR=0;
  for(i=0;i<b;i++){
    AVE+=a[i];
  }
  AVE=AVE/b;

  for(i=0;i<b;i++){
    VAR+=(a[i]-AVE)*(a[i]-AVE);
  }
  VAR=VAR/b;
  return VAR;
}

double med(int *a,int b) { 
  double MED;
  int k;
  k=b%2;
  if(k==0){
    MED=((double)a[(b/2)]+(double)a[(b/2)-1])/2;
  } else{
    MED=a[(b/2)];
  } 

  return MED;
}


