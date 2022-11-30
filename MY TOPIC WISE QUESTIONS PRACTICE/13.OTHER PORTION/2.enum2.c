#include<stdio.h>
 enum xenum{c,cpp,java};
 enum yenum{xenum};
 
 int main()
 {
 	enum yenum var;
 	printf("%d",sizeof(var));
 	 return 0;
 }
