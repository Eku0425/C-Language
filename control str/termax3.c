#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("enter the a , b ,c:");
	scanf("%d%d%d",&a,&b,&c);
	
	(a>b)?(a>c)?printf("a is max"):printf("c is max"):(b>c)?printf("b is max"):printf("c is max");
}