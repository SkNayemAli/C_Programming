#include<stdio.h>
int main()
{
	int dec,bin=0,c=1,r;
	printf("Enter the number in decimal format\n");
	scanf("%d", &dec);
	while(dec>0)
	{
		r=dec%2;
		bin=c*r+bin;
		c=c*10;
		dec=dec/2;
	}
	printf("The binary equivalent is : %d\n",bin);
	return 0;
}
