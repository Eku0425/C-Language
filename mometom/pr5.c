#include<stdio.h>

main()
{
   int unit;
   float amount,total,totalamount;
   
   printf("enter a unit:");
   scanf("%d",&unit);
   
   if(unit>0 && unit<=50)
   {
   	amount =unit*0.50;
   }
   else if(unit>50 && unit<=100)
   {
   	amount= 25  + (unit-50)*0.75;
   }
   
   else if(unit>100&&unit<=150)
   {
   	amount=25 + 37.5+((unit-100)*1.20);
   
   }
   
   else if(unit>150&&unit<=200)
   {
   	amount=25 + 37.5  + 97.5+((unit-150)*1.50);
   	
   }
   	total = amount * 0.2;
   	totalamount = amount + total;
   	printf("total amount=%f",totalamount);
}
