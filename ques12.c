#include<stdio.h>

int main()
{
	int a[6],pos,val;
	for(int i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("enter the desired position in array:");
	scanf("%d",&pos);
	printf("enter the value to be entered:");
	scanf("%d",&val);
	for(int i=5;i>pos;i--)
		a[i]=a[i-1];
	a[pos]=val;

	for(int i=0;i<6;i++)
		printf("%d\n",a[i]);
	return 0;
}