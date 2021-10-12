#include<stdio.h>
int main()
{
	int n=6*13;
	if (n%7==0 && n%13!=0){
		printf("condition satisfied.\n");
	}else if(n%7!=0 && n%13==0){
		printf("condition satisfied.\n");
	}else{
		printf("condition not satisfied.\n");
	}
	return 0;
}