#include<stdio.h>

main()
{
	int x=1;
	int n;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	
	
	for(x=1;x<=10;x++)
	{
		
		if(x==n)
		{
		   continue;
		   
		}
	      printf("%d ",x);
	}
}