#include<stdio.h>
int ab(int x)
{
	if (x>0)
		printf("%d\n",x);
	else
		printf("%d\n",-x);

}

int main()
{
	int a=-3;
	ab(a);
	return 0;
}