#include<stdio.h>
int main()
{
	int i,a,fact=1;
	printf("Enter the number: ");
	scanf("%d", &a);
	for(i=1; i<=a; i++)
	{
		fact=fact*i;
	}
	printf("The factorial of %d is: %d",a,fact);
	return 0;
	
}
