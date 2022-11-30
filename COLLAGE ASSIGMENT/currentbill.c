#include<stdio.h>
int main()
{
	int units;
	float amount;
	printf("Enter the units consumed:\n");
	scanf("%d",&units);
	
	if(units>=0 && units<=200)
	amount = 0.50*units;
	
	else if(units>=200 && units<=400)
	amount = 100+(0.65*(units-200));
	
	else if(units>=400 && units<=600)
	amount = 250+(0.80*(units-400));
	
	else if(units>600)
	amount = 425+(1.25*(units-600));
	
	printf("The amount to be paid : %.2f\n",amount);
	return 0;
}
