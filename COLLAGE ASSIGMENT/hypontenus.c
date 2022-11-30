#include<stdio.h>
int main()
{
	float perpendicular, base;
	printf("Enter perpendicular\n");
	scanf("%f", &perpendicular);
	printf("Enter base\n");
	scanf("%f", &base);
	float hypsquare=((perpendicular*perpendicular)+(base*base));
	float hypotenus = sqrt(hypsquare);
	printf("Hypotenus is %4f",hypotenus);
	return 0;
}
