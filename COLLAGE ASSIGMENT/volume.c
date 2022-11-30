#include<stdio.h>
int main()
{
	float length,width,height,surfacearea,volume;
	printf("Enter length of cuboid\n");
	scanf("%f", &length);
	printf("Enter width of coboid\n");
	scanf("%f", &width);
	printf("Enter height of cuboid\n");
	scanf("%f",&height);
	surfacearea=2*(length*width+width*height+height*length);
	volume=length*width*height;
	printf("Total surfacearea of cuboid is =%2f\n",surfacearea);
	printf("Volume os cuboid is =%2f\n",volume);
     return 0;
}
