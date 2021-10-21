#include<stdio.h>
int main()
{
	int a[5],sum=0;
	for (int i=0;i<5;i++){
		scanf("%d",&a[i]);
		if(a[i]%2!=0){
			sum++;
		}
	}
	printf("odd number occurring are %d\n",sum);
	return 0;
}