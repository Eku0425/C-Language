#include<stdio.h>

main()
{
	int number;
	
	printf("Enter a number:");
	scanf("%d",&number);
	
	(number%2==0)?printf("even"):printf("odd");
}

