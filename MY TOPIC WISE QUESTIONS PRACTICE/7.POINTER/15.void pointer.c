#include<stdio.h>
void main()
{
	void *vp;
	int a=5;
	float b=5.5;
	char c='n';
	
	vp=&a;
	printf("The value of vp when vp=&a is: %d\n",*(int*)vp);
	
	vp=&b;
	printf("The value of vp when vp=&b is: %f\n",*(float*)vp);
	
	vp=&c;
	printf("The value of vp when vp=&c is: %c\n",*(char*)vp);
}
