//Count No. of digits, alphabets & and special characters

#include<stdio.h>
#include<string.h>

main()
{
	char a[20];
	int digit=0;
	int alpha=0;
	int spchar=0;
	
	puts("enter the string:");
	gets(a);
	
	int i;
	for(i=0;a[i];i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			digit++;
		}
		else if(a[i]>=65&&a[i]<=90||a[i]>=97&&a[i]<=122)
		{
			alpha++;
		}
		else
		{
			spchar++;
		}
	}
	printf("no of digit:%d\n",digit);
	printf("alpha :%d\n",alpha);
	printf("spchar: %d\n",spchar);
}