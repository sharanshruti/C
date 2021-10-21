#include<stdio.h>

int prime(int x)
{ for(int i=2;i<x;i++){
	if(x%i==0){
		return 0;
	}else{
		return 1;
	}
}

}

int main()
{
	int a=12;
	int b=prime(a);
	return 0;
}