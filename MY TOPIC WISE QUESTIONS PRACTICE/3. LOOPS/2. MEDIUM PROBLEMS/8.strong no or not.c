#include<stdio.h>
int main()
{
	int i, sum=0, num, temp, rem;
	long fact;

	printf("Enter any number to check strong number: ");    	/*Input any number from user*/
	scanf("%d",&num);
	
	temp=num;                                    /*Coppy the value of number to a temporary variable*/
	
	while(num>0)                                        /*Find sum of factorial of digits*/
	{
		
		rem = num%10;                             /*Get last digit of number*/
	
		fact =1;                                      	/*Find factorial of last digit*/
		for(i=1; i<=rem; i++)
		{
          fact=fact*i;	
		}
		printf("Factorial of %d is: %d\n",rem,fact);
		sum= sum+fact;                                 	/*Add factorial to sum*/
		num= num/10;		
	}

	if(temp==sum)                               	/*Check strong number condition*/
	{
		printf("%d is STRONG NUMBER",temp);
	 } 
	 else
	 {
	 	printf("%d is not STRONG NUMBER",temp);
	 }
	 return 0;
}
