#include<stdio.h>
int main()
{
	float side, area;
	
	printf("Enter side of an equilateral triangle : ");
	scanf("%f",&side);
	
	area = (sqrt(3)/4)*(side*side);
	
	printf("Area of equilateral triangle is = %.2f sq. units\n",area);
	return 0;
}
