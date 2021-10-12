#include<stdio.h>
int main()
{
	int sal=30000;
	if(sal>0 && sal<30000){
		double x=(0.2*sal)+(0.3*sal);
		double y=x+sal;
		printf("Gross salary is %g\n.",y);

	}else if(sal>30000 && sal<60000){
		double x=(0.25*sal)+(0.35*sal);
		double y=x+sal;
		printf("Gross salary is %g\n.",y);
	}else if(sal>60000){
		double x=(0.3*sal)+(0.4*sal);
		double y=x+sal;
		printf("gross salary is %g\n.",y);
	}else{
		printf("invalid input.\n")
	}
	return 0;
}	