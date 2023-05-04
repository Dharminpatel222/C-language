#include<stdio.h>


// WAP to convert years into days and days into years

int main()
{
	int y,d,year,days;
	printf("enter the any year = ");
	scanf("%d",&y);
	printf("enter the any days = ");
	scanf("%d",&d);
	days=y*365;
	year=d/365;
	
	printf("days = %d\n year = %d\n",days,year);
}


