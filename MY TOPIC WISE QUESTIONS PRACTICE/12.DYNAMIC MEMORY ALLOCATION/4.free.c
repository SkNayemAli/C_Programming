#include<stdio.h>
#include<stdlib.h>   

int main()
{
	int n,i,*ptr;
	printf("Enter the total no. of values: ");
	scanf("%d",&n);
	
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory is not allocated!!");
	}
	
	printf("\nEnter the  values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	
	free(ptr);
	
	printf("\nThe entered values are: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(ptr+i));
	}
	
	free(ptr);
	
	return 0;
}
