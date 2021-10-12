#include<stdio.h>
int main()
{
	char ch=2;
	if ((ch>=97 && ch<=122)|| (ch>=65 && ch<=90)){
		printf("the enterd character is an alphabet. %c\n",ch);
	}else if (ch>=0 && ch<=9){
		printf("the enterd character is a digit. %c\n",ch);
	}else{
		printf("the entered character is something else.\n");
	}
	return 0;
}