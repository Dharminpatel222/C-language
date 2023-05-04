#include<stdio.h>

//to find area of triangles

int main()
{
	float b,h,area;
	printf("Enter the value of b = \n");
	scanf("%f",&b);
	printf("Enter the value of h = \n");
	scanf("%f",&h);
	area=0.5*b*h;
	printf("area of triangle is : %f",area);
}
