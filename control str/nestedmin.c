#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("enter the value a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	
    //a,b,c
     if(a<b)
     { // a,c
         if(a<c)
         {
         	printf("a is min");
		 }
		 else
		 {
		 	printf("c is min");
		 }
     	
	 }
	 else
	 { // b,c
	 
	   if(b<c)
	   {
	   	printf("b is min");
	   }
	   else
	   {
	   	printf("c is min");
	   }
	 	
	 }
	
}