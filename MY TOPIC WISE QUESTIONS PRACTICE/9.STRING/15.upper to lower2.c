#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char s1[30];
	printf("Enter the stirng in upper case: ");
	gets(s1);
	//strlwr(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>='A' && s1[i]<='Z')
		s1[i] = s1[i]+32;
	}
	printf("String in lowers case is: %s",s1);
}
