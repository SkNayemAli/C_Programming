#include<stdio.h>
int main()
{
	int a=10,b=5;
	float *p,*q;
	p=&a;
 	//q=p;
	q=&b;
   // *q=*p;
	printf("a=%d %d %d",a,*p,*q);
}
