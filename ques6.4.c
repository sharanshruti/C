#include<stdio.h>

union code{
	char w;
	int x;
	float y;
	double z;

};

int main()
{
	union code obj2;
	"obj2={0}";
	obj2.x=97;
	printf("%c %f %g\n",obj2.w,obj2.y,obj2.z);

	return 0;	
}