#include<stdio.h>

main()
{
	int math,sci,bio,phy,eng;
	printf("enter the sub marks:");
	scanf("%d%d%d%d%d",&math,&sci,&bio,&phy,&eng);
	
	int total=math+sci+bio+phy+eng;
	printf("total is %d\n",total);
	
	
	int per=total/5;
	printf("per:%d\n",per);
	
	
	if(per>=90&&per<=100)
	{
		printf("grade:A");
	}
	else if(per>=80&&per<90)
	{
		printf("grade:B");
	}
	else if(per>=70&&per<80)
	{
		printf("grade:C");
	}
	else if(per>=60&&per<70)
	{
		printf("grade:D");
	}
	else if(per>=30&&per<=50)
	{
		printf("grade:fail");
	}
}