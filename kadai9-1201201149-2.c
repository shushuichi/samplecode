//1201201149 山下周一郎

extern int N;

#include<stdio.h>
#include<math.h>

double nagasa(double *a){
  double K=0;
  for(int i=0;i<N;i++){
    K+=a[i]*a[i];
  }
  return sqrt(K);
}

void tanni(double *a,double l){
  double b[N];
  for(int i=0;i<N;i++){
    b[i]=a[i]/l;
  }
  printf("unit vector of a is (%f,%f,%f)\n",b[0],b[1],b[2]);

}

double product(double *a,double *b){
  double k=0;
  for(int i=0;i<N;i++){
    k+=a[i]*b[i];
  }
  return k;
}

double angle(double *a,double *b){
  double na=0,nb=0,nc=0,co=0;
  for(int i=0;i<N;i++){
    na+=a[i]*a[i];
    nb+=b[i]*b[i];
    nc+=a[i]*b[i];
  }
  co=nc/(sqrt(na)*sqrt(nb));
  
  return acos(co);
}