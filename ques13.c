#include<stdio.h>
int main()
{
	int a=2,b=4,c=5;
	if(a+b>c && b+c>a && a+c>b){
		printf("Valid triangle.\n");
	}else{
		printf("Invalid triangle.\n");
	}
	return 0;
}