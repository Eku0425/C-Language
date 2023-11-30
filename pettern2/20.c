#include<stdio.h>


// 1 0 1 0 1
//1 0 1 0
//1 0 1
//1 0
//1
main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=5;k++);
		
		for(j=1;j<=5;j++)
		{
		   if(j%2==0)
		   {
		   	printf("0");
		   }
		   else
		   {
		   	printf("1");
		   }
		   
		}
		printf("\n");
	}
}