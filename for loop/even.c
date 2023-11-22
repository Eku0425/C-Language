#include<stdio.h>

main()
{
	int i;
	printf("enter a value of i:");
	scanf("%d",&i);
	
	for(i;i>=1;i--)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
}