#include<stdio.h>
int main()
{
	int a[100],i,n,l,j,temp,f,c=0;
	
	printf("Enter the no. of element: ");
	scanf("%d",&n);
	
	printf("Enter the values of element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-l;i++)
	{
		for(j=0;j<n-(i+l);j++)
		{
			if(a[j]>a[j+l])
			{
				temp=a[j];
				a[j]=a[j+l];
				a[j+l]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	
	return 0;
}
