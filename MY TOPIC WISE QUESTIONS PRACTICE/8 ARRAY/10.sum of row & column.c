#include<stdio.h>
int main()
{
	int a[3][3],i,j,sr,sc;
	printf("Enter the elements of matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix is:\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			printf("%d\t",a[i][j]);
	    	}
			printf("\n");
		}
		for(i=0;i<3;i++)
		{
			sr = sc = 0;
		for(j=0;j<3;j++)
		{
		sr = sr + a[i][j];
		sc = sc + a[j][j];
		}
		printf("\nSo, Sum of row = %d & Sum of column = %d",sr,sc);
	}

}
