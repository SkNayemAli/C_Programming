#include<stdio.h>
int main()
{
	int i,j,n=5;
	char s[]={'I','N','D','I','A'};
	
	for(i=0;i<=2*n-1;i++)
	{
	
		if(i<n)
		{
			for(j=0;j<=i;j++)
			printf("%c",s[j]);
			printf("\n");
		}
	else
		{
			for(j=0;j<=2*n-i-2;j++)
			printf("%c",s[j]);
			printf("\n");
		}
	}
	return 0;
   
}
