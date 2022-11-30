#include<stdio.h>
//if the last significant bit is 1 the number is odd and 0 the number is even  
int checkOddEven(int n1)
{
return (n1 & 1);//The & oparetor does a bitwise and.	
}
int main()
{
	int n1;
	printf("\n\nFunction : Check the number is Odd or Even : \n");
	printf("--------------------------------------------------\n");
	printf("Input any number which you want : \n");
	scanf("%d",&n1);
	if(checkOddEven(n1))
	{
	printf("The enterd number is Odd.\n");
    }
    else
    {
    	printf("The number is Even.\n ");
	}
	return 0;
}
