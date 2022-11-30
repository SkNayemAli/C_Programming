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
	printf("%d",ftell(fp));
	fclose(fp);
}
