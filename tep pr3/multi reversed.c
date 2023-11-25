//wap to print reversed multplication table of given number.

#include<stdio.h>

main()
{
	int x=1;
	int n;
	
	printf("enter the n:");
	scanf("%d",&n);
	
	for(x=10;x>=1;x--)
	{
		printf("%d X %d =%d\n",n,x,n*x);
	}
}