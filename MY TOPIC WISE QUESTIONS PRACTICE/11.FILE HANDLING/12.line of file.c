#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fp=NULL;
	char ch;
	int count;
	fp=fopen("abc.txt","r");   //here 'r' stands for read mode....
	
	if(fp==NULL)
	{
		printf("ERROR!!!!");
		exit(1);
	}
	while((ch=fgetc(fp))!=EOF)    // here EOF= end of file...
	{
		if(ch=='\n')
		{
			count=count+1;
		}
	}
	fclose(fp);
	printf("The no. of line = %d",count);
}
