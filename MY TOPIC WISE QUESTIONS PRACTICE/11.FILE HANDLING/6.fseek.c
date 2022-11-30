#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fp=NULL;
	
	char str[50];
	char ch;
	fp=fopen("abc.txt","r");  
	
	if(fp==NULL)
	{
		printf("ERROR!!!!");
		exit(1);
	}
	
	fseek(fp,6,SEEK_SET);  // here 'SEEK_SET' is counting from beginning
	while(!feof(fp))
	{
		ch=fgetc(fp);
		printf("%c",ch);
	}
	
	 fclose(fp);
}
