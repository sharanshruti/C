#include<stdio.h>
int main()
{
	int a[5],smallest;
	for(int i=0;i<5;i++)
		scanf("%d",&a[i]);
	smallest=a[0];
	for(int i=0;i<5;i++){
		if (a[i]<smallest){
			smallest=a[i];
		}
	}
	printf("Minimum element is: %d\n",smallest);
	return 0;
}
	