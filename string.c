//Q.1 Write a Program to find the length of a string using a Pointer.

#include<stdio.h>
#include<string.h>
int length(char *a)
{
   int l = strlen(a);

}
 main()
{
	char a[100];
	printf("enter string :");
	gets(a);
	int *ptr = &a;
    printf("length is : %d",length(&a));
	
}

