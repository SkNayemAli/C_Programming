#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	
	switch(age)
	{
		case 3:
		printf("Your age is 3.");
		break;
	
		case 13:
		printf("your age is 13.\n");
		break;
		case 23:
		printf("Your age is 23.\n");
		break;
		default:
		printf("Your age is not 3,13 or 23.");
	}
	return 0;
}
		
	

