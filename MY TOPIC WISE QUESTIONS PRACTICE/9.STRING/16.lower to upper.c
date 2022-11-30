#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30];
	printf("Enter the stirng in lower case: ");
	gets(s1);
	strupr(s1);
	printf("String in upper case is: %s",s1);
}
