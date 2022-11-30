#include<stdio.h>
int main()
{
	int i,j,num;
	/*label:
		printf("We are inside label.\n");
		goto end;
		printf("Hello world\n");
		goto label;
		end:
			printf("We are not end.");*/
			for(i=0;i<10;i++)
			{
				printf("%d\n",i);
				for(j=0;j<10;j++)
				{
					printf("Enter the number from 0 to exit\n");
					scanf("%d",&num);
					if(num==0)
				{
					goto end;
				}
				}
			}
			end:
		return 0;
}
