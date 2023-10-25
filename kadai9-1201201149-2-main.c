//1201201149 山下周一郎
#include<stdio.h>
#include<math.h>
#include "kadai9-1201201149-2.h"

int N=3;

int main(void){
  double a[]={0,1,2};
  double b[]={2,3,4};
  double L=0;

  printf("a=(%f,%f,%f)\n",a[0],a[1],a[2]);
  printf("b=(%f,%f,%f)\n",b[0],b[1],b[2]);

  printf("||a||=%f\n",L=nagasa(a));

  tanni(a,L);

  printf("the product of a and b is %lf\n",product(a,b));

  printf("the angle between a and b is %lf\n",angle(a,b));
  
  return 0;
}