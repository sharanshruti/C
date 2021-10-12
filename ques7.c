#include<stdio.h>
int main()
{
	char ch='a';
	if ((ch>=97 && ch<=122)|| (ch>=65 && ch<=90)){
		printf("the enterd character is an alphabet. %c\n",ch);
	}else{
		printf("the enterd character is not an alphabet. %c\n",ch);
	}
	return 0;
}