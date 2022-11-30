#include<stdio.h>
int main()
{
	int num,swappednum;
	int firstdigit, lastdigit, digits;

		printf("Enter any number:");
	scanf("%d",&num);
	
	lastdigit = num%10;
	
	digits = (int)log10(num);
	
	firstdigit = (int)(num/pow(10,digits));
	
	swappednum = lastdigit;
	swappednum *= (int)round(pow(10,digits));
	swappednum += num%((int)round(pow(10,digits)));
	swappednum -= lastdigit;
	swappednum += firstdigit;
	
	printf("Original number=%d\n",num);
	printf("Number after swapping first & last digit: %d",swappednum);
	
    return 0;
}
