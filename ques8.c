#include<stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int a[x];
	for(int i=0;i<x;i++)
		scanf("%d",&a[i]);

	int y,z,min;
	for(y=0;y<x-1;y++)
	{
		min=y;
		for(z=y+1;z<x;z++){
			if(a[z] < a[min])
				min=z;}
			int w=a[y];
			a[y]=a[min];
			a[min]=w;
		}
	for(int i=0;i<x;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;

}