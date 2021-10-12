#include<stdio.h>
int main()
{
	int n=1234;
	int sum=0;
	int pro=1,d;
	while(n>0)
	{
		d=n%10;
		sum+=d;
		pro*=d;
		n=n/10;
		
		
	}
	printf("The sum of digits is %d\n",sum);
	printf("The product of digits is %d\n",pro);
	return 0;

}