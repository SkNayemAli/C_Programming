#include<stdio.h>
int main ()
{
	int a,b,c,d;
	printf("enter 2 no.");
	scanf("%d %d", &a,&b);
	c=(a*a+2*a*b+b*b);
	printf("square of sum of 2 number=%d \n",c);
	d=(a*a-2*a*b+b*b);
	printf("square of minus of 2 number=%d \n",d);
}
