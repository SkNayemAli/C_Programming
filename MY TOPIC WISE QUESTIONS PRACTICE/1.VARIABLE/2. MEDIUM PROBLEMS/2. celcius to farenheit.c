#include<stdio.h>
int main()
{
	float farenheit,celsius;
	printf("Enter tempereture in  celsius:");
	scanf("%f",&celsius);
    farenheit = (celsius+57.6)/1.8;
	printf("The value of this celsius temperature in farenheit is%f",farenheit);
    return 0;
}
