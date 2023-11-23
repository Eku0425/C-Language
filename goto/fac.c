#include<stdio.h>

main()
{
	int x=1;
	int n,fac=1;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	n:
		
     fac=fac*x;
	 x++;
	 
	 if(n>=x)
	 {
	 	
	 	goto n;
		
	 }	
	 
	 printf("1 to n factorial is %d",fac);	

}