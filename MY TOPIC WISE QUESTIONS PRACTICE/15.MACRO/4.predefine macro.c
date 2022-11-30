#include<stdio.h>

int main()
{
	printf("DATE: %s",__DATE__);
		printf("\nLINE: %d",__LINE__);
			printf("\nTIME: %s",__TIME__);
				printf("\nFILE: %s",__FILE__);
					printf("\nANSI: %d",__STDC__);
					
					return 0;
}
