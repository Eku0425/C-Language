#include<stdio.h>

main()
{
	int n;
	
	
	printf("enter the value of n:");
	scanf("%d",&n);
	
	int ld=n%10;
	int fd;
	int count=1;
	
	while(n>9)
	{
		n=n/10;
		count++;
	}
	fd=n;
	printf(" %d + %d = %d",fd,ld,fd+ld);
}