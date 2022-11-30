#include<stdio.h>
int main()
{
	int arr[100],i,j,n,f,c=0;
	printf("Enter the no. of element: ");
	scanf("%d",&n);
	
	printf("Enter the values of element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element which you want to found: ");
	scanf("%d",&f);
	
	for(j=0;j<n;j++)
	{
	if(f==arr[j])
	{
		printf("The %d is founded in array\n",f);
		c++;
	}
}
	printf("The frequency of %d is = %d\n",f,c);

	return 0;
}
