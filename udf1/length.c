#include<stdio.h>
#include<string.h>
void c(length)
{
	printf("%d",length);
	
}
main()
{
	char a[ 20];
	printf("enter the string:");
	scanf("%s",&a);
	
	int length= strlen(a);
	
   c(length);
}