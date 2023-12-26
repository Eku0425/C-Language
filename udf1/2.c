//Write a Program to check if a given number is divisible by both 3 & and 5 or not by using UDF.

#include<stdio.h>

void div()
{
	int a;
	
	printf("Enter the value of a: ");
	scanf("%d",&a);
	
	if(a%3==0&&a%5==0)
	{
		printf("number is divisible by both 3 & 5 ");
	}
	
	else if(a%3==0)
	{
		printf("numbwer is divisible by 3");
	}
	
	else if(a%5==0)
	{
		printf("number is divisible by 5");	
	}
	else
	{
		printf("number is not divisible by both 3 & 5");
	}
	
	
	
}

main()
{
	div();
}


