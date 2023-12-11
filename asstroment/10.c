//Wap to find sum of anti diagonal element in 2d array.
#include<stdio.h>
main()
{
	
		
	int a[3][3];
	int i,j=2;
	int sum=0;
	
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
		sum=sum+a[i][j];
		j--;
  	}
  	printf("sum is : %d",sum);
}
