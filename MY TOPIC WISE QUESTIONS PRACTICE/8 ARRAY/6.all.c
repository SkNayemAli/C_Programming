#include<stdio.h>
int main()
{
	int a[100],i,size,sum=0;
	
	printf("Enter the no. of size: ");
	scanf("%d",&size);
	
	printf("Enter the no. of element:\n");
	for(i=0;i<size;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<size;i++)
	sum = sum + a[i];
	
	printf("Sum of your array is = %d",sum);
	
	return 0;
}
