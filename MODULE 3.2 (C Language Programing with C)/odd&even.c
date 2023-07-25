#include<stdio.h>

// WAP to find number is even or odd using ternary operator

//condition ? true : false

int main()
{
	int n;
	printf("enter the any number = \n");
	scanf("%d",&n);
	
	(n % 2 == 0) ?
	(printf("%d is even number\n",n)):
	(printf("%d is odd number\n",n));
	
	return 0;	
		
}


