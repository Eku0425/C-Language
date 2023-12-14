// WAP to convert given string in uppercase.

#include<stdio.h>

main()
{
	char n;
	printf("enter your string array size:");
	scanf("%c",&n);
	
	char a[n];
	
	printf("enter your string lower case:");
	scanf("%s",&a);
	
	int i;
	int length=sizeof(a);
	
	for(i=0;i<length;i++)
	{
		if(a[i]>='a'&& a[i]<='z')
		{
			a[i]=a[i]-32;
		}
	}
	printf("upper case %s:",a);
}