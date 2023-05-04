#include<stdio.h>

// Write a program to make Simple calculator (to make addition, subtraction, 
//multiplication, division and modulo)

int main()
{
	int number1, number2, addition, subtraction, multiply;
	float divide;
	
	printf("Enter number1 :\n");
	scanf("%d",&number1);
	printf("Enter number2 :\n");
	scanf("%d",&number2);
	
	addition = number1 + number2;
	subtraction = number1 - number2;
	multiply = number1*number2;
	divide = number1/number2; 
	
	printf("Addition : %d\n",addition);
	printf("Subtraction : %d\n",subtraction);
	printf("Multiply : %d\n",multiply);
	printf("Divide : %f\n",divide);
	
}
