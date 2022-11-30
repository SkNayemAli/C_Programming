#include<stdio.h>
int main()
	{

	float a,i,sum=0, avg;
	for(i=1; i<=10;i++)
	{
		printf("Enter the number.\n");
		scanf("%f",&a);
		sum=sum+a;
	}
	avg=sum/10;
	printf("The sum is %f", sum);
	printf("The avg of all number is %f",avg);
	return 0; 
}
