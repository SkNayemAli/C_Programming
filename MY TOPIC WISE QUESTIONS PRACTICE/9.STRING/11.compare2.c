o#include<stdio.h>
#include<string.h>
int main()
{
	int flag=0,i;
	char s1[30],s2[30];
	printf("Enter first string:");
	gets(s1);
	printf("Enter second string:");
	gets(s2);
//	value = strcmp(s1,s2);
	for(i=0;s1[i]!='\0' || s2[i]!='\0';i++)
	{
		if (s1[i]!=s2[i])
		{
			flag=1;
			break;
		}
	}
	if (flag==0)
	printf("Strings are same.");
	else 
	printf("Strings are not equal.");
	
}
