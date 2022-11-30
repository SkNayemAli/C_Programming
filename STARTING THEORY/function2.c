
#include<stdio.h>
int sum,a,b,c,i,n;
void printstar(n)
{
	for(i=0;i<n;i++)
	{
			printf("%c",'*');
	}
	printf("%c",'*');
}
int main()
{
	int a,b,c;
	a=9;
	b=89;
	c=(a+b);
//	printstar(7);
printf("Enter the number of star which you want:");
scanf("%d",&n);
printstar(n-1);
	//printf("This sum is %d\n",c);
	return 0;
}

