#include<stdio.h>

 main()
 {
 	
 	int n;
 	int sum=1;
 	
 	printf("enter the value n:");
 	scanf("%d",&n);
 	
 	int a=1;
 	
 	do
 	{
 		
 		sum=sum*a;
 		a++;
 		

    }while(a<=n);
    
    printf("%d",sum);
}