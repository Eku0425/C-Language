#include<stdio.h>

main()
{
	  int basesalary;
	  int hra;
	  int da;
	  int ta;
	  int grossalary;
	  
	  printf("enter the basesalary:");
	  scanf("%d",&basesalary);
	  
	  hra=10;
	  da=5;
	  ta=8;
	  
	  grossalary=basesalary+hra+da+ta;
	  
	  printf("grossalary is %d",grossalary);
	  
}