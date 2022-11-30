#include<stdio.h>

void fun1();
//int a=5;
int main()
{
	int a=1;
	fun1();
	{
		int a=10;
		printf("Inside the 1st block: %d\n",a);
	}
	{
		printf("Inside the 2nd block: %d\n",a++);
	}
	
	printf("Inside main: %d\n",a);
	
	return 0;
}

void fun1()
{
	int a=23;
	printf("Inside fun1: %d\n",a);
}
