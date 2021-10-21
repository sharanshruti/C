#include<stdio.h>

int main()
{
	int a[5],b[5],c[5];
	/*int j=0,k=0;*/
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<5;i++)
		printf("%d\n",a[i]);
	int b_idx=0,c_idx=0;


	for (int i =0;i<5;i++)
	{
		if(a[i]%2==0){
			b[b_idx]=a[i];
			b_idx++;
		}
		else{
			c[c_idx]=a[i];
			c_idx++;
		}

	}
	printf("even array\n");

	for(int j=0;j<b_idx;j++)
		printf("%d\n",b[j]);

	printf("odd array\n");
	for (int k=0;k<c_idx;k++)
		printf("%d\n",c[k]);
	return 0;
}