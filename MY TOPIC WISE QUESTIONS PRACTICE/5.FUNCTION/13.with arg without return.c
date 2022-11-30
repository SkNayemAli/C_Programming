#include<stdio.h>
void sum(float,float);

	void main()
	{
		float x,y;
		printf("Enter the value of x and y:\n");
		scanf("%f%f",&x,&y);
		
		sum(x,y);
	}
	
	void sum(float a, float b)
	{
		float s=0;
		s=a+b;
		printf("The sum = %f",s);
	}
