#include<stdio.h>
void modify(char[],char[]);
 
 void main()
 {
 	char str1[]="NAYEM";
 	char str2[]="ALI";
 	modify(str1,str2);
 }
 void modify(char str1[],char str2[])
 {
 	int i,l1=0,l2=0;
 	for(i=0;str1[i]!='\0';i++)
	{
 		l1=l1+1;
 	}
 	for(i=0;str2[i]!='\0';i++)
 	{
 		l2=l2+1;
	 }
 //	str2[1]='A';
 	printf("Length of string 1 is = %d\n",l1);
 	printf("Length of string 2 is = %d\n",l2);
 	printf("Both strings are: %s & %s",str1,str2);
 }
