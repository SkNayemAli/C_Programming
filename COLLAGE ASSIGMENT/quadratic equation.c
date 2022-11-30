#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d,root1,root2,real,imaginary;
	
	printf("Enter the value of a, b, & c :\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	
	d = b*b - 4*a*c;	
	if(d>0)
	{
	root1=(-b + sqrt(d))/(2*a);
	root2=(-b - sqrt(d))/(2*a);
	
	printf("Roots are real and different\n");
	printf("So the 2 roots are %.2lf and %.2lf",root1,root2);
}


	else if 
	(d==0)
	{
	
	root1 = root2 = (-b/(2*a));
    
			printf("Roots are real and equal\n");
		printf("So the 2 roots are %2.lf and %2.lf",root1,root2);
  }
  else
  {
  
  real = -b/(2*a);
  imaginary = sqrt(-d)/(2*a);
}

 	 printf("Roots are not real\n") ; 
	printf("root1 = %.2lf+%.2lf, so it's imaginary.\n",real,imaginary);
	printf("root2 = %.2lf-%.2lf, so it's'imaginary.\n",real,imaginary);
	
	return 0;
}
