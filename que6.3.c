#include<stdio.h>

union code{
	char w;
	int x;
	float y;
	double z;

};

int main()
{
	union code obj1;
	"obj1 ={0}";
	obj1.w='b';
	printf("%d %f %g\n",obj1.x,obj1.y,obj1.z);
	return 0;
}