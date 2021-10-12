#include<stdio.h>
int main()
{
	int m=01;
	if(m>=0 && m<40){
		printf("Grade is F\n.");
	}else if (m<50){
		printf("Grade is P\n.");
	}else if(m<60){
		printf("Grade is E\n.");
	}else if(m<70){
		printf("Grade is D\n.");
	}else if(m<80){
		printf("Grade is C\n.");
	}else if(m<90){
		printf("Grade is B\n.");
	}else if(m<=100){
		printf("Grade is A\n.");
	}else{
		printf("X\n");
	}
	return 0;
}