#include<stdio.h>
int main()
{
	int n=1;
	if (n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12){
		printf("Number of days are 31.\n");
	}else if( n==4 || n==6 || n==9 || n==11){
		printf("Number of days are 30.\n");
	}else if (n==2){
		printf("Number of days are 28.\n");
	}else{
		printf("Invaild input.\n");
	}
	return 0;
}