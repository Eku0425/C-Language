//Q.1 Write a Program to find the average of a given 2D array.


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
	float sum=0;
	float avrg;
	
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
	
	for(i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			sum = sum + a[i][j];
		}
	}
	printf("sum is : %f \n",sum);
	
	int size = sizeof(a) / sizeof(a[0][0]);
	
	printf("size is : %d\n",size);
	
	avrg = sum / size;
	
	printf("average is : %f",avrg);
}