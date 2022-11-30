#include<stdio.h>

char* display();

void main()
{
	char *str;
	str=display();
	printf("String is: %s\n",str);
}

char* display()
{
	return "NAYEM";
}
