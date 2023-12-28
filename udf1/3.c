//Fcatorial and sum using recusrion.

#include<stdio.h>

int fac(int n)
{
	if(n==1)
	{
		return 1;
	}
	
	return n * fac(n-1);
}

main()
{
	int a = fac(5);
	
	printf("%d",a);
}