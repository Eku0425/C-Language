// Write a Program to find the cube of a given number using UDF.

#include<stdio.h>

void cub()
{
	int x;
	printf("Enter the value of x:");
	scanf("%d",&x);
	
   int 	cub=x*x*x;
   
   printf("%d",cub);
}

main()
{
	cub();
	
}
