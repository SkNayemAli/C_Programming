#include<stdio.h>
int main()
{
	printf("short int type is = %2d bytes\n", sizeof(short int));
	printf("long int type is = %2d bytes\n",sizeof(long int));
	printf("float type is = %2d bytes\n",sizeof(float));
	printf("double type is = %2d bytes\n", sizeof(double));
	printf("long double type is = %2d bytes\n",sizeof(long double));
	printf("char type is = %2d bytes\n",sizeof(char));
	return 0;
}
