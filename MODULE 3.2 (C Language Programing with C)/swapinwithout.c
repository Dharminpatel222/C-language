#include<stdio.h>
 int main()
{
 	int a,b;
 	printf("enter value of a and b\n");
 	scanf("%d%d",&a,&b);
 	
 	printf("before swapping value of a = %d and b = %d\n1",a,b);
 	
 	a=a+b;
 	b=a-b;
 	a=a-b;
 	
 	printf("after swapping value of a=%d and b  =%d\n",a,b);
 	return 0;
 } 
