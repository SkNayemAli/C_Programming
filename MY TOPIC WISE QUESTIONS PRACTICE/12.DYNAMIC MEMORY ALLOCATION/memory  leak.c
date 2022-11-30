#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ch=1;
    int *ptr;

    while (ch<50)
    {
        printf("Memory leak demo\n");

        ptr=(int *)malloc(40000*sizeof(int));

        printf("For continue press 1!!");
        scanf("%d",&ch);
    }
    
}