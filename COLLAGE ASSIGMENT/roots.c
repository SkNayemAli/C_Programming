#include<stdio.h>
int main()
{
	int a,b,c,disc;
	float d,e;
	printf("Enter data as in the form of ax^2+bx+c\n :");
	printf("Enter the value of a, b, and c:\n");
	scanf("%d%d%d" ,&a,&b,&c);
	disc=(float)((b*b)-(4*a*c));
	d= sqrt(-b+(disc))*a;
	e=sqrt(-b-(disc))*a;
	if(disc>0)
	{
		printf("The roots are %0.2f and %0.2f :" ,d,e);
	}
	else if(disc<0)
	{
		printf("Roots are imaginary");
	}
	else if(disc=0)
	{
		printf("The only roots of this equation is %0.2f:",d);
	}
	return 0;
}
