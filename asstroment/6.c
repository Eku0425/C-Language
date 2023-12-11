//Wap to find the reverse array without using another array.

#include<stdio.h>

main()
{
	int a[5]={1,2,3,4,5};
	
	int temp= a[1];
	
	a[1]=a[3];
	a[3]=temp;
	
	printf("%d %d",a[1],a[3]);
}