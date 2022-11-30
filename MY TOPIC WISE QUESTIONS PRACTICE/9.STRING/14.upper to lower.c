#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30];
	printf("Enter the stirng in upper case: ");
	gets(s1);
	strlwr(s1);
	printf("String in lower case is: %s",s1);
}
