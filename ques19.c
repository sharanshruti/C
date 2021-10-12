#include<stdio.h>
int main()
{
	int a=5, b=6, c=4;
	if(a<b && b<c){
		printf("smallest no. is %d\n.",a);
	}else if(a<b && b>c && c<a){
		printf("smallest no. is %d\n.",c);
	}else{
		printf("smallest no. is %d\n.",b);
	}
	return 0;
}