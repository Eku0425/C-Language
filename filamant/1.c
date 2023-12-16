// WAP check string is palindrome or not.

#include<stdio.h>
#include<string.h>

main()
{
	char a[20];
	
	puts("enter string:");
	gets(a);
	
	int i;
	int n , c=0;
	
	n=strlen(a);
	
	for(i=0;i<n/2;i++)
	{
		if(a[i]==a[n-i-1])
		{
			c++;
		}
	}
	if(c==i)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
		
	}
}

