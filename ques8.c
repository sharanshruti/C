#include<stdio.h>
int min(int x, int y)
{
	if (x>y)
		printf("Minimum is %d\n",y);
	else
		printf("Minimum is %d\n",x);
}

int main()
{
	int a=20,b=50;
	min(a,b);
	return 0;
}