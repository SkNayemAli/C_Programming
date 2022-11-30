#include<stdio.h>

struct student
{
	int rollno;
	char name[20];
	float marks;
};

void main()
{
	struct student s1={1,"nayem",99.9};
	struct student s2={2,"najim",98.9};
//	s2=s1;
	printf("Information for 1st student: ");
	printf("%d %s %f",s1.rollno,s1.name,s1.marks);
	printf("\nInformation for 2nd student: ");
	printf("%d %s %f",s2.rollno,s2.name,s2.marks);
	
	return 0;
	
	
}


