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
	struct student *ptr=&s1;
	
	printf("Information for 1st student: ");
	printf("%d %s %f",ptr->rollno,ptr->name,ptr->marks);
		
	return 0;
	
	
}


