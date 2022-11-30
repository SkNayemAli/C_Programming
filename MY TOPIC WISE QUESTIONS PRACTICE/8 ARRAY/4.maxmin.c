#include<stdio.h>
int main()
{
	int a[1000],i,n,max,min;
	
	printf("Enter the no. of element: ");
	scanf("%d",&n);
	
	printf("Enter the values of element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(i=1;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
		if(max<a[i])
		max=a[i];
	}
	printf("Minimum of array is: %d\n",min);
	printf("Maximum of array is: %d\n",max);
	
	return 0;
}
