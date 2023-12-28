#include<stdio.h>


int sum(int a[],int n)
{
	int i;
	int sum=0;
	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		
	}
	return sum;
	
	
}

main()
{ 

     
     
//     printf("enter the value of n:");
//     scanf("%d",&n);
	int x[5]= {1,2,3,4,5};
	{
		int a=sum(x,5);
		printf("%d",a);
	}
}