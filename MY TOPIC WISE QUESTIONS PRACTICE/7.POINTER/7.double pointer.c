#include<stdio.h>
int main()

{
	int a = 10;
	int *p = &a;
	int **q = &p;
	int ***r = &q;
	//
	*p = 12;
	//**q = 17;
	printf("a = %d\n",a);
	printf("a = %d\n",*p);
	printf("a = %d\n",*(*q));
	printf("a = %d\n",*(*(*r)));
	printf("Adress of q = %x & %x\n",r,&q);
	printf("Adress of p = %x & %x",q,&p);
}
