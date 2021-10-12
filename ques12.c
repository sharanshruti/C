#include<stdio.h>
int main()
{
	double a=45, b=67,c=180-a-b;
	if (a+b+c==180 && a>0 && b>0 && c>0){
		printf("The triangle is valid.\n");
	}else{
		printf("The triangle is invalid.\n");
	}
	return 0;
}