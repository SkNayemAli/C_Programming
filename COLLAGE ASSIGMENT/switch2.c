#include<stdio.h>
int main()
{
	int age,marks;
	
	printf("Enter your age\n");
	scanf("%d",&age);
	
	printf("Enter your marks\n");
	scanf("%d",&marks);
	
	switch(age)
	{
		case 23:
		printf("your age is 23\n");
		break;
		default:
		printf("your age is not 23\n");
		
	}
		
	switch(marks)
	
		{
	     case 75:
	     	printf("your marks are 75\n");
	     	break;
	     	default:
	     		printf(" your marks is not 75\n");
	     		printf("That's why you are not eligible for your function");
	     }
	     
	return 0;
	}








		

