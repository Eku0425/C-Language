#include<stdio.h>

 main()
 {
 	
 	int n;
 	
 	printf("enter the value n:");
 	scanf("%d",&n);
 	
 	int a=1;
 	
 	do
 	{
 	   if(a%2==1)
 	   {
 	   	
 	   	printf("%d ",a);
    	}
    	
 	  a++;
 		

    }while(n>=a);
}