#include<stdio.h>

main()
{
	int a,b,c,d;
	
	printf("enter the value a,b,c,d:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	// a,b,c,d
	
	if(a>b)
	{ // b,c,d
	  if(a>c)
		{ // a,d
		if(a>d)
		{
			printf("a is max");
		}
		else
		{
			printf("d is max");
		}
			
		}
		else
		{ // b,c,d
			if(b>c)
			{ // b,d
			 
			 if(b>d)
			 {
			 	printf("b is max"); 
			 }
			 else
			 {
			 	printf("d is max");
			 }
				
			}
			else
			{ // c,d
				if(c>b)
				{
				   printf("c is max");	
				}
				else
				{
					printf("d is max");
				}
			}
		}
	}
	else
	{ //b,c
	  if(b>c)
	  {
	  	printf("b is max");
	  }
	  else
	  {
	  	printf("c is max");
	  }
		
	}
}