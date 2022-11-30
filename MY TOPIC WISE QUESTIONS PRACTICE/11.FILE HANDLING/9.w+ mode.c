#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fp=NULL;
	
	char ch;
	fp=fopen("abc.txt","w+");   //here 'w+' stands for all erase and print fputs(16 no. line)
		
	if(fp==NULL)
	{
		printf("ERROR!!!!");
		exit(1);
	}
	fputs("NAYEM",fp);

	
	fclose(fp);
}
