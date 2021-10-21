#include<stdio.h>
#define UPPER(x) (x >= 'A' && x <= 'Z')

#define LOWER(x) (x >= 'a' && x <= 'z')

int main()
{
	char x='c';
	if(UPPER(x))
		printf("alphabet is in uppercase.\n");
	else if(LOWER(x))
		printf("alphabet is in lowercase.\n");
	else
		printf("entered character is not alphabet.\n");

	return 0;



}