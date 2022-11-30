#include<stdio.h>
int main()
{
	int base,exponent;
	long long power=1;
	int i;
	/*input base abd exponent from user*/
	printf("Enter base:");
	scanf("%d",&base);
	printf("Enter exponrnt:");
	scanf("%d",&exponent);
	/*multiply base ,exponent times*/
	for(i=1;i<=exponent;i++)
	{
		power=power*base;
	}
	printf("%d^%d=%lld",base,exponent,power);
	return 0;
}
