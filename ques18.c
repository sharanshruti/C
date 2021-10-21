#include<stdio.h>

void trans(int a[2][2],int m,int n)
{
	int at[2][2];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			at[i][j]=a[j][i];
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			printf("%d ",at[i][j]);
		printf("\n");
	}


}



int main()
{
	int a[2][2],i;
	for(i=0;i<2;i++){
		for(int j=0;j<2;j++)
			scanf("%d",&a[i][j]);
	}
	trans(a,2,2);

}