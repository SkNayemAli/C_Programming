#include<stdio.h>

void f(int*p,int*q)
{
	p=q;
	*p=2;
}

int i=0,j=1;
int main()
{
	f(&i,&j);
	printf("So, the value of i & j is = %d & %d\n",i,j);
	return 0;
}
