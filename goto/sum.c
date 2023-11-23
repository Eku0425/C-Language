#include<stdio.h>

main()
{
	int x=1;
	int n,fac=0;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	n:
		
     fac=fac+x;
	 x++;
	 
	 if(n>=x)
	 {
	 	
	 	goto n;
		
	 }	
	 
	 printf("1 to n sum is %d",fac);	

}