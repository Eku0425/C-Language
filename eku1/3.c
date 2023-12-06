 //WAP to find the average of the 1D array.
 
 #include<stdio.h>

main()
{
	int n;
	printf("enter the size:");
	scanf("%d",&n);
	
	int a[n];
	int i;
	int sum=0;
	int avrg;
	
	for(i=0;i<n;i++)
	{
		printf("enter the value of a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("a[%d]:%d\n",i,a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum = sum +a[i];
	}
	printf(" sum is %d",sum);
	avrg=sum/n;
	printf("avrg = %d",avrg);
}