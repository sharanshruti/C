#include<stdio.h>
int main()
{
	int n=407;
	int a=n%10;
	int x=n/10;
	int b=x%10;
	x=x/10;
	int c=x%10;
	if(((a*a*a)+(b*b*b)+(c*c*c))==n){
		printf("armstrong number.\n");
	}else{
		printf("not an armstrong number.\n");
	}
	return 0;

}