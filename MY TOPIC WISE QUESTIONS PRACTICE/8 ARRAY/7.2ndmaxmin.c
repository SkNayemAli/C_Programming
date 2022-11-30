#include<stdio.h>
int main()
{
	int a[1000],i,j,n,min1,min2,max1,max2;
	printf("Enetr the no. of element: ");
	scanf("%d",&n);
	
	printf("Enter the values of element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(a[0]>a[1])
	{
		max1=min2=a[0];
		max2=min1=a[1];
	}
	else
	{
		max1=min2=a[1];
		max2=min1=a[0];
	}
	for(j=2;j<n;j++)
	{
		if (a[j]<max1)
		{
			max2=max1;
			max1=a[1];
		}
		else if (a[j]<min2 && a[j]<min1)
		{
			min2=a[j];
		}
	}
	printf("The max1 and max2 = %d and %d\n",max1,max2);
	printf("The min and min2 = %d and %d\n",min1,min2);
	
	return 0;
}
