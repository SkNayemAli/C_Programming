
#include<stdio.h>
int main()
{
	int phy,chem,math,comp,eng;
	float per;
	printf("Enter five subjcts marks:");
	scanf("%d%d%d%d%d",&phy, &chem, &math, &comp, &eng);
	
	per=(phy+chem+math+comp+eng)/5.0;
	printf("percentage = %.2f\n",per);
	
	if(per>=90)
	{
		printf("Grade 0");
	}
	else if(80<=per<90)
	{
		printf("Grade E");	
	}
	else if (70<=per<80)
	{
		printf("Grade A");
	}
	else if (60<=per<70)
	{
		printf("Grade B");
	}
	else if (50<=per<60)
	{
		printf("Grade C");
	}
	else if(40<=per<50)
	{
		printf("Grade D");
	}
	else
	{
		printf("Grade F");
	}
	return 0;
}
