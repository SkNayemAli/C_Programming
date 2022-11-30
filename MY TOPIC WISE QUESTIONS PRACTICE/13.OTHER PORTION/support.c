#include<stdio.h>
extern int x;

void display()
{
	x++;
	printf("HELLO I AM FROM SUPPORT FILE!!!!");
	printf("\nx = %d",x);
}
