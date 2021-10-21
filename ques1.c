#include<stdio.h>

void count(int a[],int y,int n)
{
	int count=0;
	for(int i=0;i<n;i++){
		if(a[i]==y)
			count++;
	}
	if(count>n/2)
		printf("%d appears more than %d(n/2) times in array.\n",y,n/2);
	else

		printf("%d does not appear more than %d(n/2) times in array.\n",y,n/2);		



}



int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int y;
	scanf("%d",&y);
	count(a,y,n);
	return 0;

}