#include<stdio.h>
int main()
{
	int n=8*19;
	if (n%7==0 && n%13!=0){
		printf("Number divisible by 7.\n");
	}else if(n%13==0){
		printf("Number divisible by 13 and 7 both.\n");
	}else{
		printf("Number is neither divisible by 13 nor 7.\n");
	}
	return 0;

}