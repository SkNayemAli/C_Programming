#include<stdio.h>
int main()
{
	int divided,divisor,quotient,remainder;
	printf("Enter divided: ");
	scanf("%d", &divided);
	printf("Enter divisor: ");
	scanf("%d", &divisor);
	quotient=divided/divisor;
	remainder=divided%divisor;
	printf("quotient = %d\n",quotient);
	printf("remainder = %d\n",remainder);
	return 0;
}
