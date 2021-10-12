#include<stdio.h>
int main()
{
	int n=5;
	int fact=1;
	for(int i=1;i<=n;i++)
		fact*=i;
	printf("Factorial of n is %d\n",fact);
	return 0;
}