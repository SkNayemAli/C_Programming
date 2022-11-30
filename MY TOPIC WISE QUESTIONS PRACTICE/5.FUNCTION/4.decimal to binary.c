#include<stdio.h>
long toBin(int);
int main()
{
	long bno;
	int dno;
	printf("\n Function : Convert decimal to binary : \n");
	print("--------------------------------------------\n");
	printf("Input any decimal number : ");
	scanf("%d",&dno);
	bno = toBin(dno);
	printf("\nThe binary value of  is : %ld\n\n",bno);
	
	return 0;
}
long toBin(int dno)
{
	long bno=0,remainder,f=1;
	while(dno!=0)
	{
	remainder=dno%2;
	bno=bno+remainder*f;
	f=f*10;
	dno=dno/2;
	}
	return bno;
}
