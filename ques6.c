#include<stdio.h>
 int allarm(int x,int y)
 {
 	for(int w=x;w<=y;w++){
 		int a=w%10;
 		int t=w/10;
 		int b=t%10;
 		t=t/10;
 		int c=t%10;
 		if (w==((a*a*a)+(b*b*b)+(c*c*c))){
 			printf("%d\n",w);
 		}
 	}
 }

 int main()
 {
 	int p=100,q=999;
 	allarm(p,q);
 	return 0;

 }