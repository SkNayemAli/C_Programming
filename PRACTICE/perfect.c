# include <stdio.h>   

int main()   
{   
 int i, Num, Sum = 0 ;   
  
 printf("Please Enter any number: ") ;   
 scanf("%d", &Num) ;   
 
 for(i = 1 ; i < Num ; i++)   
  {   
   if(Num % i == 0)   
     Sum = Sum + i ;   
  }    
 if (Sum == Num)   
    printf("%d is a Perfect Number", Num) ;   
 else   
    printf("%d is not the Perfect Number", Num) ;   

return 0 ;   
}

