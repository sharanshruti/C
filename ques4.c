#include<stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int a[x];
	for(int i=0;i<x;i++)
		scanf("%d",&a[i]);
	int y=0;
	for(int i=0;i<x;i++)
	{
		if(a[i]!=0)
			a[y++]=a[i];
	}

	for(int i=y;i<x;i++)
		a[i]=0;

	for(int i=0;i<x;i++)
		printf("%d ",a[i]);
	printf("\n");

	return 0;

}