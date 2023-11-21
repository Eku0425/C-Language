#include<stdio.h>

main()
{
	int no, n=1;
	 
	 printf("enter a no:");
	 scanf("%d",&no);
	 
	 do
	 {
	 	printf("%d*%d =%d\n",no,n,no*n);
	 	n++;
	 	
	 }while(n<=10);
	 
}
