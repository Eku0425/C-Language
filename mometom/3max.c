#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("enter the value a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	
	
	if(a>b)
	{  
	   if(a>c)
	   { 
	   	  printf("a is max");
	   }
	   else
	   {
	   	  printf("c is max");
	   }
		
	}
	else
	{  
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