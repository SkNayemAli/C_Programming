#include<stdio.h>
#include<math.h>
int main()
{
int n,x,y;
    
    printf("Enter the value of x and n :\n");
	scanf("%d%d",&x,&n);
	
	 //printf("Enter the value of n :\n");
	//scanf("%d",&n);
	
	switch (n)
	{
		case 1:
		printf("y = %d\n",1+x*x);
		break;
		
		case 2:
		printf("y = %\n",1+x/n);
			break;
			
			case 3:
			printf("y = %d\n",1+2*x);
				break;
				
						default :
						printf("y = %d\n",1+n*x);
						
						return 0;
		
	}
}
