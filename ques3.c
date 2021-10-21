#include<stdio.h>
 int arm(int n)
 {	
 	int a=n%10;
	int x=n/10;
	int b=x%10;
	x=x/10;
	int c=x%10;
	if(((a*a*a)+(b*b*b)+(c*c*c))==n){
		return 1;
	}else{
		return 0;
	}
	
 }

 int main()
 {
 	int n=135;
 	int ans=arm(n);
 	printf("%d\n",ans);
 	return 0;
 }