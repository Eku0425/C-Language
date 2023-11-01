#include<stdio.h>
main()
{
	//(x+y+z)3
	int x,y,z;
	int ans;
	
	printf("enter the value of x:");
	scanf("%d",&x);
	
	printf("enter the value of y:");
	scanf("%d",&y);
	
	printf("enter the value of y:");
	scanf("%d",&y);
	
	ans=(x*x*x)+(y*y*y)+(z*z*z)+(3*(x+y)+(y+z)+(z+x));
	
	printf("ans is %d",ans);
}