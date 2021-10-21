#include<stdio.h>
int perfect(int x, int y)
{	
	for(int w=x;w<=y;w++){
		int sum=0;
		for(int i =1;i<w;i++){
			if(w%i==0){
				sum+=i;
			}else{
				sum+=0;	
			}if(sum==w){
				printf("%d\n",sum);
				break;
			}  
		}
	}	
}
int main()
{
	int a=1,b=100;
	perfect(1,100);
	return 0;
}	