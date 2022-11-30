#include<stdio.h>
int main()
{
	int num,sum,digits,firstdigit,lastdigit;
	sum=0;
	/*Input a number from user*/
	printf("Enter any number to find sum of first and last digit of any number:");
	scanf("%d",&num);
	/*Find lastdigit */
	lastdigit=num%10;
	/*Find total number of digits*/
	digits=(int)log10(num);
	/*Find firstdigit*/
	firstdigit=(int)(num/pow(10,digits));
	/*Calculate the sum*/
	sum=firstdigit+lastdigit;
	printf("Sum of first and last digit = %d",sum);
	return 0;
}
