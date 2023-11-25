#include<stdio.h>

main()
{
	int a;
	int i=1;
	
	printf("enter the value of num:");
	scanf("%d",&a);
	
	
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",a,i,a*i);
	}
	
}