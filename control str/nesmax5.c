#include<stdio.h>

main()
{
	int a,b,c,d,e;
	
	printf("Enter The value a,b,c,d,e :");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	
	// a,b,c,d,e;
	if(a>b)
	{
		// a,c,d,e;
		if(a>c)
		{
			// a,d,e;
			if(a>d)
			{
				// a,e;
				if(a>e)
				{
					printf(" a is max");
				}
				else
				{
					printf("e is max");
				}
			}
			else
			{
				if(d>e)
				{
					printf(" d is max"); 
				}
				else
				{
					printf(" e is max");
				}
			}
		}
		else
		{
			// a,c,d,e;
			if(c>d)
			{
				if(c>e)
				{
					printf("c is max");
				}
				else
				{
					printf(" e is max");
				}
			}
			else
			{
				printf("d is max");
			}
		}
	}
	else
	{
		// b,c,d,e;
		if(b>c)
		{
			//b,d,e
			if(b>d)
			{
				//b,e
				if(b>e)
				{
					printf(" b is max");
				}
				else
				{
					printf(" e  is max");
				}
			}
			else
			{
				//d,e
				if(d>e)
				{
					printf(" d  is max");
				}
				else
				{
					printf(" e is max" );
				}
			}
		}
		else
		{
			//c,d,e
			if(c>d)
			{
				if(c>e)
				{
					printf(" c is max");
				}
				else
				{
					printf(" e is max");
				}
			}
			else
			{
				printf("d is max");
			}
		}
	}
}