#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Input numbers of terms:");
	scanf("%d",&n);
	printf("\n The odd numbers are:\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\n",2*i-1);
		sum+=2*i-1;
	}
	printf("\nThe sum of odd natural numbers upto %d terms: %d\n",n,sum);
	return 0;
	}
