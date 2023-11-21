#include<stdio.h>

 main()
 {
 	
 	int n;
 	
 	printf("enter the value n:");
 	scanf("%d",&n);
 	
 	int a=1;
 	
 	do
 	{
 	   if(n%2==0)
 	   {
 	   	
 	   	printf("%d ",n);
    	}
    	
 	  n--;
 		

    }while(n>=a);
}