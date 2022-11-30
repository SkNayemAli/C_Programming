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
	
	fseek(fp,6,SEEK_SET);  // here 'SEEK_SET' is counting from beginning position..
		ch=fgetc(fp);
		printf("%c\n",ch);
		
		
			fseek(fp,-3,SEEK_CUR);  // here 'SEEK_CUR' is counting from current position..
				ch=fgetc(fp);
				printf("%c\n",ch);
		
			fseek(fp,-3,SEEK_END);  // here 'SEEK_END' is counting from end position...
				ch=fgetc(fp);
				printf("%c\n",ch);
	
	
	 fclose(fp);
}
