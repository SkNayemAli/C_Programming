#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter any two numbers:");
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b)
	{
		printf("the maximum number is:");
		printf("%d",a);
	}
	else
{
	printf("the maximum number is:");
	printf("%d",b);
}
return 0;
}
