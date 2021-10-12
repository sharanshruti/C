#include<stdio.h>
int main()
{
	char ch='A';
	if (ch>='A' && ch<='Z')
		printf("the character is in uppercase.\n");
	else if (ch>='a' && ch<='z')
		printf("the character is in lowercase.\n");
	else
		printf("the character is not an alphabet.\n");
	
	return 0;

}