#include<stdio.h>
main()
{
	int x,y;
	int ans;
	
	printf("enter the value of x:");
	scanf("%d",&x);
	
	printf("enter the value of y:");
	scanf("%d",&y);
	
	ans=(x*x*x)-(y*y*y)-((3*x*y)*(x+y));
	
	printf("ans is %d",ans);
}