#include<stdio.h>
int main()
{
	int n,r,temp,sum=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	temp=n;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		sum=sum+(r*r*r);
	}
	if(temp==sum)
	printf("This is armstrong number.");
	else
	printf("This is not armstrong number.");
	
	return 0;
}
