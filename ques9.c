#include<stdio.h>
int main()
{
	char ch='2';
	if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'  || ch=='A'  || ch=='E'  || ch=='I'  || ch=='O'  || ch=='U' ){
		printf("alphabet is a vowel.\n");
	}else if((ch>=97 && ch<=122)|| (ch>=65 && ch<=90)){
		printf("alphabet is a consonant.\n");
	}
	else{
		printf("it is not an alphabet.\n");
	}
	return 0;

}