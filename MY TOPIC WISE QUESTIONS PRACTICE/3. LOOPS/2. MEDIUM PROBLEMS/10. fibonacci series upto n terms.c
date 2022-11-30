#include<stdio.h>
int main()
{
	int a, b, c, i, terms=0;
	
/*Input numbers from user */
printf("Enter number of terms: ");
scanf("%d", &terms);

/*Fibonacci magic initialization*/
a=0;
b=1;
c=0;

printf("Fibonacci terms: \n");

/*Iterate through \n terms*/
for(i=0; i<=terms-1; i++)
//while(c<=terms-1)
{
	printf("%d, ",c);
	
	a=b;     //copy n-1 to n-2
	b=c;     //coppy current to n-1
	c= a+b;  //new term
}
return 0;
}
