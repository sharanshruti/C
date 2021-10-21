#include<stdio.h>

int main()
{
	int a[2][2];
	int sumrow=0,sum=0;
	int sumcol=0,sum1=0;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++)
			scanf("%d",&a[i][j]);
	}	
	for(int i=0;i<2;i++){
		sumrow+=a[0][i];	
		sum+=a[1][i];
	}	
	printf("sum of row 1 is %d\n",sumrow);
	printf("sum of row 2 is %d\n",sum);

	for(int i=0;i<2;i++){
		sumcol+=a[i][0];	
		sum1+=a[i][1];
	}	
	printf("sum of col 1 is %d\n",sumcol);
	printf("sum of col 2 is %d\n",sum1);

}	
