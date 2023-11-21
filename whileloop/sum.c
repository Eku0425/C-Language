#include<stdio.h>
main()
{
	int n;
	int sum=0;
	int x=1;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	while(x<=n)
	{
		sum=sum+x;
		x++;
	}
	printf("%d",sum);
}