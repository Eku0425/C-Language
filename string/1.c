//WAP to convert given string in lowercase.

#include<stdio.h>

main()
{
	char n;
	
	printf(" enter your syring array size:");
    scanf("%c" ,&n);
	
	char a[n];
	
	printf("enter your string  uper case:");
	scanf("%s",&a);
	
	int i;
	int length=sizeof(a);
	
	for(i=0;i<length;i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
	}
	printf("lower case %s ",a);	

}
