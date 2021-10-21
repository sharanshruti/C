#include<stdio.h>

double ar(double x){
	double ar=(3.14*x*x)/4;
	return ar;
}
int main()
{
	double d=2;
	double a=ar(d);
	printf("Area of circle is %g.\n",a);
	return 0;
}

