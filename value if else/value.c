#include<stdio.h>

main()
{
	int a;
	printf("Enter The Value : ");
	scanf("%d",&a);
	
	if(a>0)
	{
		printf(" Positive value");
	}
	else
	{
		if(a==0)
		{
			printf("Neutral value");
		}
		else
		{
			printf(" Negative value");
		}
	}
}