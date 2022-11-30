#include<stdio.h>

void display(int n)
{
	if(n<1)
	{
		return ;
		
	}
	else
	{
		printf("%d\n",n);
		display(n-1);
		printf("%d\n",n);
	}
}

void main()
{
	int n=3;
//	printf("Enter the value of n: ");
//	scanf("%d",&n);
	dispaly(n);
}
