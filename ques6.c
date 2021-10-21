#include<stdio.h>

union code{
	char w;
	int x;
	float y;
	double z;

};

int main()
{
	union code obj={0};
	union code *n=&obj;
	obj.w='a';	
	printf("%c\n",n->w);
	obj.x=2;
	printf("%d\n",n->x);
	obj.y=2.0;
	printf("%f\n",n->y);
	obj.z=4.0;
	printf("%g\n",n->z);
	printf("%p %p %p %p\n",&obj.w,&obj.x,&obj.y,&obj.z);
	printf("%ld\n",sizeof(union code));

	return 0;
}