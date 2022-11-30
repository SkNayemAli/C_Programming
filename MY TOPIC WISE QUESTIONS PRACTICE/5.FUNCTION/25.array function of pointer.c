#include<stdio.h>

void add(int a,int b)
{
	printf("Addition is = %d\n",a+b);
}
void sub(int a,int b)
{
	printf("Substraction is = %d\n",a-b);
}
void mult(int a,int b)
{
	printf("Multipication is = %d\n",a*b);
}
void div(int a,int b)
{
	printf("Devision is = %d\n",a/b);
}

int main()
{
	int ch,a,b;
	void (*fptr[10])(int,int)={add,sub,mult,div};
	
	printf("0 for addition.\n1 for substraction.\n2 for multiplication.\n3 for devision.\n");
	printf("Enter choice: ");
	scanf("%d",&ch);
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
/*	switch(ch)
	{
		case 1: add(a,b);
		break;
			case 2: sub(a,b);
		break;
			case 3: mult(a,b);
		break;
			case 4: div(a,b);
		break;
		default: 
		printf("Enter valid choice: ");
	}*/
	(*fptr[ch])(a,b);
}
