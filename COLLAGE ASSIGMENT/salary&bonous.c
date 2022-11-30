#include<stdio.h>
int main()
{
	int i,j;
	float salary,bonous;
	char gender;
	printf("Enter M for male and F dor female\n");
	scanf("%c",&gender);
	printf("Enter salary\n");
	scanf("%f",&salary);
	if(gender=='M' || gender=='m')
	{
		if(salary>10000)
		bonous=(float)(salary*0.05);//0.05-5%
		else
		bonous=(float)(salary*0.07);
	}
	if(gender=='F' || gender=='f')
	{
		if(salary>10000)
	bonous=(float)(salary*0.01);//0.01-10%
	else
	bonous=(float)(salary*0.15);
}
salary+=bonous;
printf("Bonous=%.2f\nsalary=%.2f\n",bonous,salary);
return 0;
}
