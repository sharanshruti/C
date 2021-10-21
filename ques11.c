#include<stdio.h>

int main()
{
	int a[5],pos;
	for(int i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("enter the desired position in array:");
	scanf("%d",&pos);
	for(int j=pos;j<5;j++)
		a[pos]=a[pos+1];
	
	for (int i=0;i<4;i++)
		printf("%d",a[i]);
	return 0;

}