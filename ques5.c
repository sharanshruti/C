#include<stdio.h>

int isstrong(int n, int t)
  { for (int w=n;w<=t;w++)
  	{
  		int facta=1, factb=1, factc=1;
  		int a=w%10;
		int x=w/10;
		int b=x%10;
		x=x/10;
		int c=x%10;
			for(a;a>0;a--){
				facta*=a;
			}
		printf("%d\n", facta);
			for(b;b>0;b--){
				factb*=b;
			}
		printf("%d\n",factb);
			for(c;c>0;c--){
				factc*=c;
			}
		printf("%d\n", factc);
			if(w=facta+factb+factc){
				printf("%d\n",w);
				break;
			}else{
				break;
			}
	}
  }

int main()
{
	int a=134,b=145;
	isstrong(a,b);
	return 0;
}