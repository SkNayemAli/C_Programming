#include<stdio.h>
int main()
{
	int sum=0,n,r,temp;
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
	printf("The number is armstrong.");
	else
	printf("The number is not armstrong.");
	
	return 0;
}
