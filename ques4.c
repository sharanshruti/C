#include<stdio.h>

#pragma pack(1)
struct student {
	char name[11];
	int roll;
	char sex;
	double gpa;
};

void printstudent(struct student s1)
{
	printf("%s %d %c %g\n",s1.name,s1.roll,s1.sex,s1.gpa);
}
void printptrstudent(struct student *s)
{
	printf("%s %d %c %g\n",s->name,s->roll,s->sex,s->gpa);
}

int main()
{
	struct student s1={"priya",20,'F',8.9},students[5];
	printstudent(s1);
	printf("%p\n",&s1);
	printf("%p %p %p %p\n",&s1.name,&s1.roll,&s1.sex,&s1.gpa);
	printf("%ld\n",sizeof(struct student));
	
	for(int i=0;i<5;i++)
	{
		scanf("%s %d %c %lg",students[i].name,&students[i].roll,&students[i].sex,&students[i].gpa);		
	}
	for(int i=0;i<5;i++)
	{
		printstudent(students[i]);
	}
	for(int i=0;i<5;i++)
	{
		printf("%p %p %p %p\n",&students[i].name,&students[i].roll,&students[i].sex,&students[i].gpa);
	}
	struct student s={"shweta",45,'F',8.8};
	printptrstudent(&s);


	return 0;	
}