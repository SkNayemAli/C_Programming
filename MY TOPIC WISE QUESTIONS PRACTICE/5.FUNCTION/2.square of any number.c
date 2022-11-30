#include<stdio.h>
double square(double num)
{
	return(num*num);
}
int main()
{
	int num;
	double n;
	printf("\n\nFunction : Find square of any number :\n");
	printf("-------------------------------------------\n");
	printf("Input any number of square : \n");
	scanf("%d",&num);
	n=square(num);
	printf("The squar of %d is = %.2f\n",num,n);
	return 0;
}
