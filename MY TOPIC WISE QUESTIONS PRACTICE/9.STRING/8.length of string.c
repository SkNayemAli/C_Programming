#include<stdio.h>
#include<string.h>
int main()
{
	int length;
	char name[100];
	printf("Enter a string to calculate it's length:\n");
	gets(name);
	length = strlen(name);
	printf("Length of the string is = %d\n.",length);
	
	return 0;
}
