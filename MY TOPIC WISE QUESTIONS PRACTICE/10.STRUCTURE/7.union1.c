#include<stdio.h>

union nayem
{
	int a;
	char b;
	float c;
};

void main()
{
	union nayem u;
	union nayem *ptr=&u;
	u.a=1;
	u.b=20;
	u.c=22.9;
	
	printf("a=%d\n",ptr->a);
	printf("b=%c\n",ptr->b);
	printf("c=%f\n",ptr->c);
}
