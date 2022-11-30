#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fptr1=NULL,*fptr2=NULL;
	char ch;
	
	fptr1=fopen("abc.txt","r");   
	if(fptr1==NULL)
	{
		printf("ERROR!!!!");
		exit(1);
	}
	
		fptr2=fopen("nayem.txt","w");   
	if(fptr2==NULL)
	{
		printf("ERROR!!!!");
		exit(1);
	}
	while((ch=fgetc(fptr1))!=EOF)    // here EOF= end of file...
		{
			fputc(ch,fptr2);
		}
		printf("Successfully copied!!");
		
		fclose(fptr1);
		fclose(fptr2);
	}
	
