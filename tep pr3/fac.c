#include<stdio.h>

main()
{
	int n;
	int i;
	int sum=1;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
		
	}
	printf(" %d ",sum);
}