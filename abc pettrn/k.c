#include<stdio.h>

main()
{
	int i,j;
	for(i=1; i<=8; i++)
	{
		for(j=1; j<=6; j++)
		{
			if(j==1||(i==5&&j==2)||(i==4&&j==3)||(i==3&&j==4)||(i==2&&j==5)||(i==1&&j==6)||(i==6&&j==3)||(i==7&&j==4)||(i==8&&j==5))
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}