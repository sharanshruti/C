#include<stdio.h>

int main()
{
	int a[5],sum=0;
	for(int i=0; i<5;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<5;i++){
		for(int k=i+1;k<5;k++){
			if(a[i]==a[k]){
				sum++;
				break;
			}
		}
	}
	printf("Number of duplicate elements in array are %d\n",sum);
	return 0;
}