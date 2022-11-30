#include<stdio.h>
int main()
{
	char input;
	float kmstomiles = 0.621317;
	float inchestofoots = 0.833333;
	float cmstoinches = 0.393701;
	float poundstokgs = 0.453392;
	float inchestometers = 0.0254;
float first,second;

 while(1)
 {
 	printf("Enter the input charecter q to quit:\n 1. kms to miles\n 2.inches to foot\n 3.cms to inches\n 4.pound to kgs\n 5.inches to meters\n");
 	
	 scanf("%c",&input);
 
 switch(input)
 {
 	case'q':
 		printf("Quiting the program...");
 		goto end;
 		break;
 		
 		case'1':	
 			printf("Enter the quantity in terms of first unit\n");
 			
 			scanf("%f",&first);
 			
 			second=first*kmstomiles;
 			
 			printf("%f kms is equal to %f miles\n",first,second);
 			break;
 					
 		case'2':	
 			printf("Enter the quantity in terms of first unit\n");
 			scanf("%f",&first);
 			second=first*inchestofoots;
 			printf("%.f inches is equal to %f foots\n",first,second);
 			break;
 		case'3':
 			printf("Enter the quantity in terms of first unit\n");
 			scanf("%f",&first);
 			second=first*cmstoinches;
 			printf("%f cms is equal to %f inches\n",first,second);
 			break;
 			
 		case'4':
 			printf("Enter the quantity in terms of first unit\n");
 			scanf("%f",&first);
 			second=first*poundstokgs;
 			printf("%f pound is equal to %f kgs\n",first,second);
 			break;
 			
 		case'5':
 			printf("Enter the quantity in terms of first unit\n");
 			scanf("%f",&first);
 			second=first*inchestometers;
 			printf("%f inches is equal to %f meters\n",first,second);
 			break;
 			
 			default:
 			printf("In default now");
 			break;
 }
 
}
end:
	return 0;
}
