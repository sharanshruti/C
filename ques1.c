#include<stdio.h>
#include<stdlib.h>


int main()
{
	int in;
	int a,b;
	do{
		printf("enter two integers:");
		scanf("%d %d",&a,&b);

		printf("enter 1 for addition.\n");
		printf("enter 2 for subtraction.\n");
		printf("enter 3 for mulltiplication.\n");
		printf("enter 4 for division.\n");
		printf("enter 5 to exit.\n");
		scanf("%d",&in);
		switch(in){
			case 1:
			printf("%d + %d =%d\n",a,b,a+b);
			break;
			case 2:
			printf("%d - %d =%d\n",a,b,a-b);
			break;
			case 3:
			printf("%d * %d =%d\n",a,b,a*b);
			break;
			case 4:
			printf("%d / %d =%d\n",a,b,a/b);
			case 5:exit(1);		
			break;
			default:
			printf("error! incorrect input.\n");

		}
	}while(in>5);	
	return 0;
}