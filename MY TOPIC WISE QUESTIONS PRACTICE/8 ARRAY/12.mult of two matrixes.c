#include<stdio.h>
#define x 50
int main()
{
	int a[x][x],b[x][x],c[x][x],i,j,k,sum,m,n,p,q;
	printf("Enter the no. of rows & column for first matrix:\n");
	scanf("%d %d",&m,&n);
	printf("Enter the first matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the o. of rows & column of second matrix:\n");
	scanf("%d %d",&p,&q);
	printf("Enter the second matrix:\n");
		for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nFirst matrix is:\n");
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nSecond matrix is:\n");
		for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	if(n!=p)
	{
		printf("your matrixes are can't multiply:\n");
	}
	else
	{
		for(i=0;i<m;i++)
		{
		for(j=0;j<q;j++)
		{
			sum=0;
			for(k=0;k<m;k++)
			{
				sum = sum + (a[i][k]*b[k][j]);
			}
			c[i][j] = sum;
			
			//scanf("%d",&a[i][j]);
			}	
		}
		printf("Multipliation is:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
	
}
