//wap to find factorial of 3 using while loop.

#include<stdio.h>

main()
{
	int n;
	int f=1;
	int y=1;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	
	for(f=1;f<=n;f++)
	{
		y=y*3;
	}
	printf("%d",y);
}