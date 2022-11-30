#include<stdio.h>
int main()
{
	float radius, diameter, circumference, area;
	
	printf("Enter radius of circle ; ");
	scanf("%f",&radius);
	
	diameter = 2*radius;
	circumference = 2*3.14*radius;
	area = 3.14*(radius*radius);
	
	printf("Diamter of circle is = %.2f units\n",diameter);
	printf("Ciccumference of circle = %.2f units\n",circumference);
	printf("Area of circle = %.2f sq. units\n",area);
	return 0;
	
}
