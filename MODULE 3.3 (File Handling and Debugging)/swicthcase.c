#include<stdio.h>

int main()
{
	int a,b;
	int c;

	printf("press the button as per requirment");
	printf("\n press 1 for addition");
	printf("\n press 2 for subtraction");
	printf("\n press 3 for division");
	printf("press 4 for multipication");
	
	printf("\n enter the number of a = ");
	scanf("%d",&a);
	
	printf("\n enter the number of b = ");
	scanf("%d",&b);
	
	printf("press the button = ");
	scanf("%d",&c);
	
	switch (c)
	{
		case 1:
			printf("addition is = %d",a+b);
			break;
		
	    case  2:
			printf("subtraction is = %d",a-b);
			break;
			
		case 3:
			printf("division is = %d",a/b);
			break;
			
		case 4:
			printf("multipication is = %d",a*b);
			break;	
			
		default:
			printf("enter the proper number");
			break;
	}
	
}
