#include<stdio.h>

//1. Monday to Sunday using switch case

int main()
{
	int num;
	printf("enter the number = \n");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:printf("monday");
		break;
		
		case 2:printf("tuesday");
		break;
		
		case 3:printf("wensday");
		break;
		
		case 4:printf("thursday");
		break;
		
		case 5:printf("friday");
		break;
		
		case 6:printf("saturday");
		break;
		
		case 7:printf("sunday");
		break;
	}
}

