#include<stdio.h>
int main()
{
	int a=50,b=20,c;
	printf("Before swapping a=%d and b=%d \n",a,b);
	c=a;//store value of a in c, c=50
	a=b;//a=20
	b=c;//b=50
	printf("After swappping a=%d and b=%d",a,b);
	return 0;
}
