#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char s1[30];
	printf("Enter the stirng in lower case: ");
	gets(s1);
	//strupr(s1);
		for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>='a' && s1[i]<='z')
		s1[i] = s1[i]-32;
	}
	printf("String in upper case is: %s",s1);
}
