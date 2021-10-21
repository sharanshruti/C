#include<stdio.h>

int main()
{
	int a[4],count =1;
	for(int i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	for(int i =0;i<4;i++){
		for(int j=i+1;j<4;j++){
			if(a[i]==a[j]){
				++count;
				printf("%d comes %d time in array\n",a[i],count);}
		
		}
	}
	return 0;
}