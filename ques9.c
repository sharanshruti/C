#include<stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int a[x];
	for(int i=0;i<x;i++)
		scanf("%d",&a[i]);
	int i,j,y;
	for(i=0;i<x-1;i++)
	{
		for(j=0;j<x-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				y=a[j];
				a[j]=a[j+1];
				a[j+1]=y;
			}
		}

	}
	for(i=0;i<x;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}