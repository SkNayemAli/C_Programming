#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fp=NULL;
	
	
	char ch;
	char str[50];
	fp=fopen("abc.txt","r");
	
	if(fp==NULL)
	{
		printf("ERROR!!!!");
		exit(1);
	}
	while(!feof(fp))
	{
	fgets(str,35,fp);
	printf("%s",str);
	}
/*	while(!feof(fp))
	{
		ch=fgetc(fp);
		printf("%c",ch);
	}*/
	fclose(fp);
}
