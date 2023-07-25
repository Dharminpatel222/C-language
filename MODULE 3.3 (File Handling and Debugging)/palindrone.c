//? WAP to reverse a string and check that the string is palindrome or not 

#include<stdio.h>
#include<string.h>

int main()
{
	char one[10],two[10];
	int cmp;
	
	printf ("enter a string = ");
	scanf("%s",one);
	
	strcpy(two,one);
	strrev(one);
	
	cmp=strcmp(one,two);
	
	if(cmp==0)
	{
		printf("entered string is palindrome");
	}else{
			printf("entered string is not palindrome");
	}
	
}
