#include<stdio.h>
int main()
{
	int n= 63;
	int i; 
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
			printf("%d\n",i);
	}

	return 0;
}