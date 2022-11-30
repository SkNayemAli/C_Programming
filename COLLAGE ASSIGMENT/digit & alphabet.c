#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a charecter:");
	scanf("%c",&ch);
	if((ch>='a' &&ch<='z')||(ch>='A' && ch<='z'))
	{
		printf("It is an alphabet");
	}
else if(ch>='0' && ch<='9')
{
	printf("It is a digit\n");
}
else
{
	printf("It is a sapecial charecter:\n");
}
return 0;
}
