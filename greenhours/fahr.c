//f=(9.5*c)+32)

#include<stdio.h>

main()
{
	int celsius;
	int fahrenheit;
	
	printf("enter thev value of celsius:");
	scanf("%d",&celsius);
	
	fahrenheit=(9.5*celsius)+32;
	
	printf("fehrenheit is %d",fahrenheit);
}