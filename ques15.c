#include<stdio.h>
int main()
{
	int n=13;
	for(int i=2;i<n;i++)
	{
		int x = n%i;
		if (x==0)
			printf("Not a prime no.\n");			
		else
			printf("Prime no.\n");
		break;
	}
	return 0;
}
