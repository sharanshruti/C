#include<stdio.h>
int main()
{
	int a=13, b=18;
	int max=a>b?a:b, lcm=max;

	for ( ; ; lcm+=max){
		if(lcm%a==0 && lcm%b==0)
			break;
	}
	printf("lcm is %d.\n",lcm);
	return 0;

}