#include<stdio.h>
int main()
{
	int u=200;
	if(0<u && u<50){
		double x=u*2.50;
		printf("Electricity bill is %g\n.",x);
	} else if(u<125){
		double x=(50*2.50)+((u-50)*3.00);
		printf("Electricity bill is %g\n",x);
	}else if(u<200){
		double x=(50*2.50)+(75*3.00)+((u-125)*3.50);
		printf("Electricity bill is %g\n.",x);
	}else if(u>=200 && u<225){
		double x=(50*2.50)+(75*3.00)+((u-125)*3.50);
		double y=0.2*x;
		double z=x+y;
		printf("Electricity Bill is %g\n.",z);
	}else if(u>=225){
		double x=(50*2.50)+(75*3.00)+(100*3.50)+((u-225)*4.00);
		double y=0.2*x;
		double z=x+y;
		printf("Electricity bill is %g\n.",z);
	}else{
		printf("invalid input.\n");
	}
	return 0;
}