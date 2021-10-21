#include<stdio.h>

#define GREATER(x,y)(x>y?x:y)

int main()
{
	int x=10,y=20;
	printf("%d\n",GREATER(x,y));

	return 0;

}