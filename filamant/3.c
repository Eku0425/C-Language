// Copy one string into another - strcpy()

#include<stdio.h>
#include<string.h>

main()
{
	char a[20];
	char b[20];
	
	int c= strcpy(a,b);
	
	puts("enter the string:");
	gets(a);
	
	puts("enter the string:");
	gets(b);
	
	printf("copy one string into anothwer\n");
	
	
	printf("%s\n",a);
	printf("%s\n",b);
	
	
}