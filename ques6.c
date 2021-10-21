#include<stdio.h>

int main()
{
	int n, x=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int y;
	scanf("%d",&y);
	for(int i=0;i<n;i++)
	{
		if(a[i]==y){
			printf("found at %d\n",i+1);
			x=1;
		}
	}
	if (x==0)
		printf("%d not found in array.\n",y);

	return 0;
}