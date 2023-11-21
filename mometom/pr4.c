#include<stdio.h>

main()
{
	char A;
	
	printf("Enter the weeks name:");
	scanf("%c",&A);
	
	switch(A)
	{
		  case 'M':printf("MONDAY");
		  break;
		  case 'T':printf("TUESDAY");
		  break;
		  case 'W':printf("WEDNESDAY");
		  break;
		  case 't':printf("THURSDAY");
		  break;
		  case 'F':printf("FRIDAY");
		  break;
		  case 'S':printf("SATURDAY");
		  break;
		  case 's':printf("SUNDAY");
		  break;
		  
		  default:printf("enter valid input");
		    
		   
	}
}
