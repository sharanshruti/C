#include<stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int a[x];
	for(int i=0;i<x;i++)
		scanf("%d",&a[i]);
	int start, end, middle, element;
	printf("enter the value to find:\n");
	scanf("%d",&element);
	start=0;
	end=x-1;
	middle=(start+end)/2;
	while(start<=end)
	{
		if(a[middle]<element)
			start=middle+1;
		else if(a[middle]==element)
		{
			printf("%d found at location %d\n",element,middle);
			break;
		}
		else
			end=middle-1;
		middle=(start+end)/2;
	}
	if(start>end)
		printf("%d Not Found!\n",element);
	return 0;
}