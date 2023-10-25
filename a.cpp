#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc,char** argv){
	//argv[1]=設定するMの値
	//argv[2]=乱数の種
	double x,y,z,d,pi;
	int i,count=0;
	srand(atoi(argv[2]));
	
	for(i = 1;i <= atoi(argv[1]);++i){
		x=(double)rand()/RAND_MAX;
		y=(double)rand()/RAND_MAX;
		z=(double)rand()/RAND_MAX;
		
		d=x*x+y*y+z*z;
		if(d <= 1.0) 
		count++;
	}
	
	pi=((double)count/(double)i)*6;
	printf("%f\n",pi);
	return 0;
}