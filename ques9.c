#include<stdio.h>
int main()
{
	int a=5, b=15;
	int max=a>b?a:b, lcm=max;

	for ( ; ; lcm+=max)
	{
		if(lcm%a==0 && lcm%b==0)
			break;
	}
	double gcd=(a*b)/lcm;
	printf("GCD is %g.\n",gcd);
	return 0;	

}
