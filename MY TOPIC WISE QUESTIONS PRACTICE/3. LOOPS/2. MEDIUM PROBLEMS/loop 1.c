#include<stdio.h>
int main()
{
	int n, digit, firstdigit, lastdigit;
	printf("Enter any numbers:");
	scanf("%d",&n);
	lastdigit=n % 10;
	digit=(int)log10(n);
	firstdigit=(int)(n/pow(10,digit));
	printf("first digit=%d\n",firstdigit);
	printf("last digit=%d\n",lastdigit);
	return 0;
}
