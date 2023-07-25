#include<stdio.h>

int maximum(int a[],int n); //function declaration..

int main()
{
	int a[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("enter the number:");
		scanf("%d",&a[i]);
	}
	printf("maximum number is = %d",maximum(a,5));
	
	return 0;
}

int maximum(int a[],int n) //function defination....
{
   int i;
   int max=0;
   for(i=0;i<5;i++)
   {
   	if(a[i]>max)
   	{
   		max=a[i];
	   }
   }
   
}


