#include<stdio.h>

main()
{   
     int n;
     
     printf("enter the value of n:");
     scanf("%d",&n);
	int x=1;
	
	while(n>=x)
	{
		printf("%d ",n);
		n--;
	}
}