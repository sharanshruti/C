#include<stdio.h>
int main()
{
	int arr1[4],arr2[4],arr3[8];
	int i,j,k;
	for (i=0;i<4;i++)
		scanf("%d",&arr1[i]);
	for (i=0;i<4;i++)
		printf("%d",arr1[i]);
	for (j=0;j<4;j++)
		scanf("%d",&arr2[j]);
	for (j=0;j<4;j++)
		printf("%d",arr2[j]);
	for (i =0;i<4;i++)
		arr3[i]=arr1[i];
	for(j=0;j<4;j++){
		arr3[i]=arr2[j];
		i++;
	}

	for(i=0;1<8;i++){
		for(k=0;k<8;k++){
			if(arr3[k]<=arr3[k+1]){
				j=arr3[k+1];
				arr3[k+1]=arr3[k];
				arr3[k]=j;
			}
		}
	}
	printf("the merged array in descennding order is:\n");
	for(int i=0;i<8;i++)
		printf("%d",arr3[i]);
	return 0;



}