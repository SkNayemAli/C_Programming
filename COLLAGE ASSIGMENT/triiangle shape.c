#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three side of your triangle.\n");
	scanf("%d%d%d", &a,&b,&c);
	if(a==b && a==c)
	{
		printf("Equilateral triangle.\n");
	}
	else if(a!=b && a!=c)
	{
		printf("Scalene triangle.\n");
	}
	else
	{
		printf("Isosceles triangle.\n");
	}
	return 0;
}
