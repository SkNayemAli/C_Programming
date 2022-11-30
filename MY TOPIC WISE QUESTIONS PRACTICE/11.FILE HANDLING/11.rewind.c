#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fp=NULL;
	
	char str[50];
	char ch;
	fp=fopen("abc.txt","r+");   
	
	if(fp==NULL)
	{
		printf("ERROR!!!!");
		exit(1);
	}
	while(!feof(fp))
	{
		ch=fgetc(fp);
		printf("%c",ch);
	}
	
	rewind(fp);
	
		while(!feof(fp))
	{
		ch=fgetc(fp);
		printf("%c",ch);
	}
	
	fclose(fp);
}
