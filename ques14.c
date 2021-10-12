#include<stdio.h>
int main()
{
	double a=22.0/7.0, b=22.0/6.0, c=22.0/7.0;
	if (a==b && b==c){
		printf("Equilateral triangle.\n");
	}else if(a==b || a==c || b==c){
		printf("Isosceles triangle.\n");
	}else if (a!=b!=c){
		printf("scalene triangle.\n");
	}else{
		printf("Invalid input.\n");
	}
	return 0;
}