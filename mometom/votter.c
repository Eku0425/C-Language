#include<stdio.h>

main()
{
	int age;
	
	printf("enter the age:");
	scanf("%d",&age);
	
	if(age>18)
	{
		if(age>100)
		{
			printf("you enter the age more than 100");
			
		}
		else
		{
			printf("you r eligible");
		}
	}
	else
	{
		if(age<=0)
		{
			if(age==0)
			{
				printf("you enter nutal age");
			}
			else
			{
				printf("you are not eligible");
			}
		}
	}
	
	
}




