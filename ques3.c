#include<stdio.h>

void subset(int a[],int b[],int x,int y)
{
	int i=0,j=0;
	for(i=0;i<y;i++){
		for(j=0;j<x;j++){
			if(b[i]==a[j])
				break;
		}

		if(j==x)
		{
			printf("Not a subarray.\n");
		}
	}
	printf("subarray\n");
}

int main()
{
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	int a[x],b[y];
	for(int i=0;i<x;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<y;i++)
		scanf("%d",&b[i]);

	subset(a,b,x,y);
	return 0;
	
}