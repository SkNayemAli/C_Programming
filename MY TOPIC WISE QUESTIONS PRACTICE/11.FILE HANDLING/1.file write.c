#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	FILE *fp=NULL;
	
	char str[50];
	int i;
	fp=fopen("abc.txt","w");   //here 'w' stands for write mode...
	
	if(fp==NULL)
	{
		printf("ERROR!!!!");
		exit(1);
	}
	printf("Enter the string: ");
	gets(str);
	
	fputs(str,fp);          //if this line or the 23 & 24 no. line
	
//	for(i=0;i!=strlen(str);i++)
//	fputc(str[i],fp);

	fclose(fp);
}
