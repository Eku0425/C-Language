#include<stdio.h>
main()
{
	int x,y,*a,*b,temp;
	
	
	printf("enter the value of x:");
	scanf("%d",&x);
	
	printf("enter the value of y:");
	scanf("%d",&y);
	
	a=&x;
	b=&y;
	
	temp=*b;
	*b=*a;
	*a=temp;
	
	printf("after swapping x  =%d\n",&x);
	printf("after swapping y = %d\n",y);
}
