#include<stdio.h>

main()
{
	int n;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	
	(n%7==0)?printf("divisible"):printf("not divisible");
}