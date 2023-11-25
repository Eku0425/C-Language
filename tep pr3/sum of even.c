//wap to find sum of even number between 1 to 28.

#include<stdio.h>

main()

{
	int x=1;
	int y=28;
	int sum=0;
	
	for(x=1;x<=28;x++)
	{
		if(x%2==0)
		{
			sum = sum+x;
		}
	}
	printf("%d",sum);
}