#include<stdio.h>

main()
{
	int i,n;
	printf("enter a value of n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			printf("%d ",i);
		}
	}
}