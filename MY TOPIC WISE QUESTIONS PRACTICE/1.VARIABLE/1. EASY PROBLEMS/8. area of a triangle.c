#include<stdio.h>
int main()
{
	float a,b,c,s,area;
	//a,b,c are sides.
	printf("Enter the length of the first side of the triangle =");
	scanf("%f", &a);
	printf("Enter the length of the second side of the triangle =");
	scanf("%f", &b);
	printf("Enter the length of the third side of the triangle =");
	scanf("%f", &c);
	//s is semin perimeter.
	s=(a+b+c)/2;
	area=(s*(s-a)*(s-b)*(s-c));
	printf("The semi perimeter pf the triangle= %f\n",s);
     printf("The area of triangle is = %f\n", area);
	return 0;
}
