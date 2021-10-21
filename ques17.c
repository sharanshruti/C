#include<stdio.h>


void multiply(int a[2][2], int b[2][2],int m,int n,int p)
{
	int c[2][2],i,j,k;
	for(i=0;i<m;i++){
		for(j=0;j<p;j++){
			c[i][j]=0;
			for(k=0;k<n;k++){
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}

		}
	}

	printf("the resultant matrix is:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++)
			printf("%d ",c[i][j]);
		printf("\n");

	}

}




int main()
{
	int a[2][2] , b[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++)
			scanf("%d",&a[i][j]);
	}

	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++)
			scanf("%d",&b[i][j]);
	}

	multiply(a,b,2,2,2);

	
}