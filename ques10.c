#include<stdio.h>

int main()
{
	int n= 1234;
	int digits= 0;
	while(n)
	{
		n=n/10;
		digits++;
	}

	printf("The number of digits is %d\n",digits);
	return 0;
}