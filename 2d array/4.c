#include<stdio.h>

void main()
{
	int x,y;
	
	printf("Enter the size of x : ");
	scanf("%d",&x);
	
	printf("Enter the size of y : ");
	scanf("%d",&y);
	
	int a[x][y];
	int i;
	int j;
	
	for(i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			printf("Enter the value of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	for(j=0; j<y; j++)
	{
		int sum=0;
		for(i=0; i<x; i++)
		{
			sum = sum + a[i][j];
		}
		printf("Column-wise sum is : %d \n",sum);
	}
	
}