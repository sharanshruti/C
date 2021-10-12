#include<stdio.h>
int main()
{
	int yr=1600;
	if(yr%4==0 && yr%100!=0){
		printf("%d is a leap year.\n",yr);
	}else if(yr%4==0 && yr%100==0 && yr%400==0){
		printf("%d is a leap year.\n",yr);
	}else{
		printf("%d is not a leap year.\n",yr);
	}
	return 0;
}