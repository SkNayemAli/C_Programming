#include<stdio.h>
#include<stdlib.h>    // full form of realloc is = reallocation

int main()
{
	int n,i,*ptr;
	printf("Enter the total no. of values: ");
	scanf("%d",&n);
	
	ptr=(int*)malloc(n*sizeof(int));
	
	printf("\nEnter the  values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("Enter the updated size of n: ");
	scanf("%d",&n);
	
	int *ptr1=(int*)realloc(ptr,n*sizeof(int));
	
	printf("\nPrevoius adress: %d\nNew adress is: %d",ptr,ptr1);
	
	printf("\nThe entered values are: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(ptr1+i));
	}
	
	free(ptr1);
}
