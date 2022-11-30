#include<stdio.h>
int main()
{
	int i,n,sum=0;
	float avg;
	printf("Input the 10 numbers:\n");
	for(i=1;i<=10;i++)
	{
		printf("Number:%d:",i);
		scanf("%d\n",&n);
		sum+=n;
	}
	avg=sum/10.0;
	printf("The sum of 10 number is: %d\n The avarage value is : %f\n",sum,avg);
	return 0;
}
