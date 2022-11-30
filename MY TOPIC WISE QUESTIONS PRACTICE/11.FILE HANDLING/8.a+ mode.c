#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fp=NULL;
	
	char ch;
	fp=fopen("abc.txt","a+");   //here 'a+' stands for appending..
		
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
	fputs("Nayem is good boy.",fp);
	
	 fclose(fp);
}
