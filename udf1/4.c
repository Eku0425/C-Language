//Fcatorial and sum using recusrion.

#include<stdio.h>

int sum(int n)
{
	if(n==1)
	{
		return 1;
	}
	
	return n + sum(n-1);
}

main()
{
	int a;
	
	printf("enter the value a:");
	scanf("%d",&a);
	
	
	printf("sum is = %d ",sum(a));
}