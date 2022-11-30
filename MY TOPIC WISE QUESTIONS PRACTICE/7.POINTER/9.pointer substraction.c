#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int *p=&a[0];
	int *q=&a[3];
	printf("q-p = %d\n",q-p);
	printf("p-q = %d\n",p-q);
	printf("Value of q = %d\n",*q);
	q=q-2;
	printf("Value of q = %d\n",*q);
	p=q+1;
	printf("Value of p = %d\n",*p);
	p=p+2;
	printf("Value of p = %d\n",*p);
	printf("q-p = %d\n",q-p);
	
}
