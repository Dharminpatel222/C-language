#include<stdio.h>

//WAP to print table up to given numbers 

int main()

{
	int n,i;
	printf("enter the any number = ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("%d x %d = %d\n",n,i,n*i);
	}
}

