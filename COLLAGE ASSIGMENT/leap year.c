#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year\n");
	scanf("%d",&year);
	if((year%100!=0 && year%4==0) || (year%400==0))
	{
		printf("It is a leap year");
	}
	else
	{
		printf("It i not a leap year");
	}
	return 0;
}
