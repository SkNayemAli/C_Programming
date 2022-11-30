#include<stdio.h>
int main()
{
	int a[5] = {1,2,3,4,5};
	int *p = &a[0];
	printf("Value is = %d\n",*p);
	printf("Adress of p = %u\n",p);
	p = p+1;
	printf("Value is = %d\n",*p);
	printf("Adress of p = %u\n",p);
	p = p+2;
	printf("Value is = %d\n",*p);
	printf("Adress of p = %u\n",p);
	
}
