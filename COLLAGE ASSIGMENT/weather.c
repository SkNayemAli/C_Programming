#include<stdio.h>
int main()
{
	int a;
	printf("Enter the temperature ic celcius scale:\n");
	scanf("%d",&a);
	if(a<=0)
	{
		printf("Freezing weather.");
	}
	else if(a>0 &&a <=10)
	{
		printf("Very cold weather.");
	}
	else if(a>10 && a<=20)
	{
		printf("Cold weather.");
	}
	else if(a>20 && a<=30)
	{
		printf("Normal weather.");
	}
	else if(a>30 && a<=40)
	{
		printf("Hot wheather.");
	}
	else
	{
		printf("Very hot weather.");
	}
	return 0;
}
