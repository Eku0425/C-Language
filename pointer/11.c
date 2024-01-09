//Write a Program to find the square of each element of a given 1D array using a Pointer.

#include<stdio.h>


int square (int *j, int n)
{
	int i;

	for(i=0; i<n; i++)
	{
	  j[i] = j[i] * j[i];
   	  printf("%d ",j[i]);	
	}
}

int main()
{
	int n;
	printf("enter size of array : ");
	scanf("%d",&n);

	int i;
    int j[n];
	for(i=0; i<n; i++)
	{
		 printf("enter array a[%d]",i);
		 scanf("%d",&j[i]);
	
   }

	square(&j,n);
	
}
