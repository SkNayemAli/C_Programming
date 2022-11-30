#include<stdio.h>
int main()

{
	     int i,sum=0,n;
	     float avg;
	     printf("enter 10 intigers\n");
		for(i=1;i<=10;i++)//i=11 11<=10(ture)
		{
			scanf("%d",&n); //n=6
			sum=sum+n;//sum=4+6=10
			printf("total sum =%d\n",sum);
			avg=sum/10.0;
			printf(" the avg=%f\n",avg);
			return 0;
			}	
}
