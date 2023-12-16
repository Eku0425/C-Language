#include<stdio.h>
#include<string.h>
//WAP compares two strings. - strcmp(name1,name2).
main()
{
	char strg1[10];
	char strg2[10];
	
	int value;
	
	puts("enter the string:");
	gets(strg1);
	
	puts("enter the string:");
	gets(strg2);
	
	value= strcmp(strg1,strg2);
	
	if(value==0)
	{
		printf("string same");
		
	}
	else
	{
		printf("string not same");
		
	}
	
}