#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Input number of terms:");
	scanf("%d",&n);
	printf("The even numbers from 1 to %d are:\n",n,i);
	for(i=1;i<=n;i++)
{
	printf("%d",2*i);
	sum+=2*i;
}
printf("\nThe sum of even natural number upto%d terms: %d\n",n,sum);
return 0;
}
