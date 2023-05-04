#include<stdio.h>

// WAP to find simple interest 

int main()
{
	float p,r,n,ans;
	printf("Enter the value of p : \n");
	scanf("%f",&p);
	printf("Enter the value of r : \n");
	scanf("%f",&r);
	printf("Enter the value of n : \n");
	scanf("%f",&n);
	ans = p*r*n/100;
	printf("Ans of simple interest : %f",ans);
}
