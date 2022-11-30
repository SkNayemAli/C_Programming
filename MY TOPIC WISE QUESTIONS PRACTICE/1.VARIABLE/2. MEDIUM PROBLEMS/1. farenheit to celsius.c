#include<stdio.h>
int main()
{
	float farenheit,celsius;
	printf("Enter tempereture in farenheit:");
	scanf("%f",&farenheit);
	celsius=(farenheit-32)*1.8;
	printf("The value of this farenheit temperature in celsius is%f",celsius);
     return 0;
}
