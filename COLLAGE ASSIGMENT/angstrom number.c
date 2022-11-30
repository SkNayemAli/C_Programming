#include<stdio.h>
int main()
{
	int n,r,sum=0,temp;
//	int c=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	printf("The number is angstorm\n");
	else
	printf("The number is not angstorm\n");
	return 0;
}
