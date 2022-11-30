#include<stdio.h>
int main()
{
	double a,b,c;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	c=a;
	a=b;
	b=c;
	printf("After swapping first number = %d\n",a);
	printf("After swapping second number = %d\n",b);
	return 0;
}
