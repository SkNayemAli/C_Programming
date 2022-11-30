#include<stdio.h>
int main()
{
	int i,a[5];
	for(i=0;i<5;i++)
	{
		printf("Enter the value of %d element of the array\n",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("The value of %d element of the array is %d\n",i,a[i]);
	}
/*	marks[0]=34;
	printf("Marks of student 1 is %d\n",marks[0]);
	marks[0]=56;
	marks[2]=76;
	printf("Makrs of student 2 is %d\n",marks[2]);*/
	return 0;
}
