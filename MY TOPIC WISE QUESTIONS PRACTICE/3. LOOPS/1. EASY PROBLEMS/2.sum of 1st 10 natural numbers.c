#include<stdio.h>
int main()
{
	int j, sum=0;
	printf("The first 10 natural numbers are:\n");
	for (j=1;j<=10;j++)
	{
		sum =sum+j;
		printf("%d\n",j);
	}
	printf("\n The sum is :%d\n",sum);
	return 0;
}
