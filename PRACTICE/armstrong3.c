#include<stdio.h>
int main()
{
	int n,r,temp,sum=0;
	
	printf("Enter the number which you want: ");
	scanf("%d",&n);
	temp=n;
	
	while(n>0)
	{
		r=n%10;
		n=n/10;
		sum = sum+(r*r*r);
	}
	if(temp==sum)
	printf("This number is armstrong.");
	
	else
	printf("This number is not armstrong.");
}
