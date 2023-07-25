#include<stdio.h>

//. Vowel or Consonant using switch case 

int main()
{
	char ch;
	printf("enter a character = ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a':
		case 'e':
 		case 'i':
		case 'o':
		case 'u':
		case 'A': 
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		
		printf("%c is vowel",ch);
		break;
		
		default:
		printf("%c is consonat",ch);	
	}
}
