//1201201149 山下周一郎
#include<stdio.h>

#include"kadai8-1201201149-1.h"

int main(void){
  double a=10,b=5,c,d,e,f;

  printf("x=%f\ny=%f\n",a,b);

  c=wa(a,b);
  d=sa(a,b);
  e=seki(a,b);
  f=shou(a,b);
 
  printf("x+y=%f\n",c);
  printf("x-y=%f\n",d);
  printf("x*y=%f\n",e);
  printf("x/y=%f\n",f);

  return 0;
}