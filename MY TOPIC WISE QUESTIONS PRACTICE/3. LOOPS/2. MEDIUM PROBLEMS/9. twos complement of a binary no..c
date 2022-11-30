6#include<stdio.h>

#define SIZE 8

int main()
{
	char binary[SIZE+1], onescomp[SIZE+1], twoscomp[SIZE+1];
	int i, carry=1;
	
	printf("Enter %d bit binary value: ",SIZE);
	
	/*Input 8-bit binary string*/
	gets(binary);
	
	/*Find ones complement of the binary number*/
	for(i=0; i<SIZE;i++)
	{
		if(binary[i] == '1')
		{
			onescomp[i] == '0';
		}
		else if (binary[i] == '0')
		{
			onescomp[i] == '1';
		}
	}
	onescomp[SIZE]='0';
	
	/*
	*Add 1 to the ones complement
	*/
	for(i=SIZE-1; i>=0; i--)
	{
		if(onescomp[i] == '1' && carry == 1)
		{
			twoscomp[i] = '0';
		}
		else if( onescomp[i] == '0' && carry == 1)
		{
			twoscomp[i] = '1';
			carry = '0';
		}
		else
		{
			twoscomp[i] =  onescomp[i];
		}
	}
	twoscomp[SIZE] = '0';
	
	printf("Original binary = %s\n", binary);
	printf("Ones complement = %s\n", onescomp);
	printf("Twos complement = %s\n", twoscomp);
	
	return 0;
}
