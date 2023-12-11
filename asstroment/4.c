#include<stdio.h>
//Write a program to get two array and create addition of array position wise.
main()
{
	int a[3][3];
	int b[3][3];
	int sum [3][3];
	int i,j;
	
	
		for(i=0;i<3;i++)
    	{
  	    	for(j=0;j<3;j++)
  	    	{
  	 	printf("enter the value of a[%d][%d]:", i,j);
  	 	scanf("%d",&a[i][j]);
         	}
     	printf("\n");
    	}
			
    	for(i=0;i<3;i++)
    	{
  	    	for(j=0;j<3;j++)
  	    	{
  	 	printf("enter the value of b[%d][%d]:", i,j);
  	 	scanf("%d",&b[i][j]);
         	}
     	printf("\n");
     }
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",sum[i][j]);
			
			
		}
		printf("\n");
	}
	
}