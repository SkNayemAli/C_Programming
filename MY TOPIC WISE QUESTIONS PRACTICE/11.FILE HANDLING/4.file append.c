#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fp=NULL;
	
	char str[50];
	char ch;
	fp=fopen("abc.txt","a");   //here 'a' stands for append mode...
	
	if(fp==NULL)
	{
		printf("ERROR!!!!");
		exit(1);
	}
	
	printf("Enter the content you want to append:");
	gets(str);
	
	//fputs(str,fp);
	
	fprintf(fp,"\n%s",str);
	
	printf("Successfully appended!!");
	fclose(fp);
}
