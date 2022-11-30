#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fp=NULL;
	
	char ch;
	fp=fopen("abc.txt","r+");   //here 'r+' stands for modifing..
		
	if(fp==NULL)
	{
		printf("ERROR!!!!");
		exit(1);
	}
	fputs("NAYEM",fp);
	fputc('F',fp);
	
	fclose(fp);
}
