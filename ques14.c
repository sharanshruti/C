#include<stdio.h>
int main()
{
	int n=1234;
	int i;
	while(n>0)
	{
		i=n%10;
		printf("%d",i);
		n=n/10;

	}
	return 0;
}