#include <stdio.h>
int main()
{
	char ch='c';
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
		printf("The charachter is a small letter and a vowel\n.");
	}else if( ch>='A' && ch<='Z' && ch!='A' && ch!='E' && ch!='I' && ch=='O' && ch!='U'){
		printf("The character is a capital letter and a consonant\n.");
	}else if (ch>='A' && ch<='Z' || ch>='a' && ch<='z'){
		printf("A character in english\n.");
	}else{
		printf("Maybe a special character.\n");
	}
	return 0;
}