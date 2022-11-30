#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character:\n");
	scanf("%c",&ch);
	printf("The given character is: %c\n",ch);
	ch=ch+32;
	printf("The character after conversion is: %c\n",ch);
	return 0;
	
}
