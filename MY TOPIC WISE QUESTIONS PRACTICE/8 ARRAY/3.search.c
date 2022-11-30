#include<stdio.h>
int main()
{
	int arr[100],i,n,j,f,c=0;
	printf("Enter the no. of element:\n");
	scanf("%d",&n);
	
	printf("Enter the values of element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element which you want to found:\n");
	scanf("%d",&f);
	
	for(j=0;j<n;j++)
	{
		if (f==arr[j])
		{
		printf("The %d is founded in array\n",f);
		printf("The position of %d is %d\n",f,j);
		c++;
	}
	}
	if(c==0)
	printf("The %d is not founded in array\n",f);
	
	return 0;
}
