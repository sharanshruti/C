#include<stdio.h>
int l(int x,int y,int z)
{
	if(x>y>z)
		printf("largest of all is %d\n",x);
	else if(y>x>z)
		printf("largest of all is %d\n",y);
	else 
		printf("largest of all is %d\n",z);

}

int main()
{
	int a=10,b=12,c=14;
	l(a,b,c);
	return 0;
}