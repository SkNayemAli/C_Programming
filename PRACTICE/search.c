#include<stdio.h>
int main()
{
	int i,arr[100],j,f,n,c=0;
	printf("Enter the size of elements: ");
	scanf("%d",&n);
	printf("Enter the values of element: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element which position you want to found: ");
	scanf("%d",&f);
	
	for(j=0;j<n;j++)
	{
		if(f==arr[j])
		{
			printf("%d is founded in array\n",f);
			printf("The position of %d is: %d",f,j);
			c++;
		}
	}
	if(c==0)
	printf("%d is not founded in array",f);
	
	return 0;
}
