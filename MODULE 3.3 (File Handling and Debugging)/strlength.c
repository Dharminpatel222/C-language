// WAP Find out length of string without using inbuilt function

#include<stdio.h>

int main()
{
	char str[50],i;
	gets(str);
	for(i=0;str[i]!='\0';i++);
	printf("length of string = %d",i);
	return 0;
}



