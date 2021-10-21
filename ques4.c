#include<stdio.h>

int allp(int a,int b)
{
	int i;
	for(i=a;i<=b;i++){
		for (int x=2;x<=b;x++){
			if(i%x!=0){
				printf("%d\n",i);
				break;
			}else{
				break;
			}
		}
	}
}

int main()
{
	int y=10, z=20;
	allp(y,z);
	return 0;
}