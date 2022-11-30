#include<stdio.h>

void display();
void main()
{
	display();
	display();
}
void display()
{
	static int x;
		int y;
		x+=10;
		y=10;
		printf("x = %d\n",x);
		printf("y = %d\n",y);
}
