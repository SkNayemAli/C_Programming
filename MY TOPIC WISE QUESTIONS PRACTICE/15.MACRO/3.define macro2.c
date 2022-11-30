#include<stdio.h>
#define MAX(a,b) if(a>b)\
						printf("%d is maximum...\n",a); \
						else \
						printf("%d is maximum..\n",b);
int main()
{
	//#undef MAX................. it is for undeifne function...
	MAX(5,4);
	MAX(6,8);
	return 0;
}
