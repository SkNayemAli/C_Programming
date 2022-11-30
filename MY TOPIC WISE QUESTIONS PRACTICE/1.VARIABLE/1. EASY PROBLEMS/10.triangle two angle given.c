#include<stdio.h>
int main()
{
float a,b,c;
	printf("Enter the first angle of triangle\n",a);
	scanf("%f",&a);
		printf("Enter the second angle of triangle\n",b);
	scanf("%f",&b);
	c = 180-(a+b);
	printf("The third anglr of triangle is = %f\n",c);
	return 0;
}
