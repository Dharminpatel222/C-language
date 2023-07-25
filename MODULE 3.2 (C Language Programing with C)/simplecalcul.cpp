#include<stdio.h>

//WAP to make simple calculator (operation include Addition, Subtraction, 
//Multiplication, Division, modulo)

int main()
{
	int a,b,ch;
	printf("enter the value of a:");
	scanf("%d",&a);
	
	printf("enter the choice :");
	scanf("%d",&ch);
	
	printf("enter the value b :");
	scanf("%d",&b);
	
	switch (ch)
	{
		case 1: printf("addition : %d",a+b);
		break;
		
		case 2:printf("subtraction : %d",a-b);
		break;
			
		case 3:printf("multiplication : %d",a*b);
		break;
			
		case 4:	printf("division : %d",a/b);	
		break;
			
		case 5:	printf("modulas : %d",a%b);	
		break;	
	}
}
