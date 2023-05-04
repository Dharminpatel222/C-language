#include<stdio.h>

//WAP to check if the given year is a leap year or not.

int main()
{
	int y;
	printf("enter any year");
	scanf("%d",&y);
	if(y%400==0 || y%4==0 && y%100!=0)
	{
		printf("Year is leapyear");
	}else
	{
		printf("year is not leapyear");
	}
	return 0;
}
