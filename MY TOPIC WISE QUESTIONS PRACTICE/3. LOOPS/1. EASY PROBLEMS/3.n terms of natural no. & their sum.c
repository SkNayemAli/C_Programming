#include<stdio.h>
int main()
{
	int i,n, sum=0;
	printf("Input the value of terms:\n");
	scanf("%d",&n);
	printf("\nThe first %d natural numbers are:\n",n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i);
		sum=sum+i;
	}
	printf("\nThe sum of natural numbers upto %d terms: %d\n",n,sum);
	return 0;
}
