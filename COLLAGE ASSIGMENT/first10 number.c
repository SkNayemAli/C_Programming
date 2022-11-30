#include<stdio.h>
int main()
{
	int a=1,sum=0;
	
     while (a<=10)//loop variable.
     {
     	sum=sum+a;
     	a++;
	}
	printf("The sum of first 10 natural number is %d :\n",sum);
	return 0;
}
