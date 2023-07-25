// WAP to print factorial of given number 

#include<stdio.h>

int main()
{
	int n,i,fact;
	printf("enter a any number = ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d",i);
		fact=fact*i;
	}
	printf("factorial is = %d\n",fact);
}

