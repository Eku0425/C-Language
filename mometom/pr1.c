#include<stdio.h>

main()
{
	char a;
	
	   printf("input a char:");
	   scanf("%c",&a);
	   
	   if(a>=65 && a<=90)
	   {
	   	printf("This is a alphabet");
	   }
	   
	   else if (a>=48 && a<=57)
	   {
	   	printf("This is digit");
	   }
	   
	   else if(a>=33 && a<=47)
	   { 
	     printf("This is a special charater");
	     
	   }
	   
}



