//Q.1 Write a Program to find the reverse of a 1D array using a Chain of Pointers.

#include<stdio.h>

 main()
{




  int i,n;
  printf("enter the value of n:");
  scanf("%d",&n);
int a[n];
int *ptr=&a[n];

for(i=0;i<n;i++)
{
	printf("enter the value of a[%d]:",i);
	scanf("%d",&a[i]);
}
for(i=n-1;i>=0;i--)
{
	printf("memroy value %d\n",ptr);
	ptr-=1;
}
for(i=n-1;i>=0;i--)
{
	printf("a[%d]=a[%d]\n",i,a[i]);
}
}