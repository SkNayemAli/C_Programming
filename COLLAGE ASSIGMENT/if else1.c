   #include<stdio.h>
   int main()
   {
   	int age;
   	printf("Enter your age\n");
   	scanf("%d",&age);
   	printf("You have entered %d as your age\n",age);
   	if(age>=18)
     {
	printf("you can vote!");
	}
     else if (age>=10)
     {
	printf("your agr between 10 to 18 , you  can vote for kids");
	}
     else {
	printf(" Sorry you cannot vote!");
	}
     }
	return0;
	
