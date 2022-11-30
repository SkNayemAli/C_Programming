#include<stdio.h>
int main()
{
	int i,j,n,arr[100],f,c=0;
	
	printf("Enter the no. of elememts: ");
	scanf("%d",&n);
	
	printf("Enter the elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	printf("Enter the element which position you want to found: \n");
	scanf("%d",&f);
	for(j=0;j<n;j++)
	{
		if(f==arr[j])
		{
			printf("%d is founded in array.\n",f);
			printf("%d is founded in the %dth position.",f,j);
			c++;
		}
	}
	if(c==0)
	{
		printf("%d is not founded in array.",f);
	}
	
	return 0;
}
