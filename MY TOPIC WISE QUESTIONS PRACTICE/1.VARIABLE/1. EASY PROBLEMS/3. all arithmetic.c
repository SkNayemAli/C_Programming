#include<stdio.h>
int main()
{
	int a,b;
	int sum,sub,mult,mod;
	float div;
	printf("Enter any two numbers :");
	scanf("%d%d",&a,&b);
	
	sum = a+b;
	sub = a-b;
	mult = a*b;
	div = a/b;
	
	printf("sum = %d\n",sum);
	printf("Sub = %d\n",sub);
	printf("Mult = %d\n",mult);
	printf("div = %d\n",div);
	return 0;
}
