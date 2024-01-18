#include <stdio.h>


struct Marks 
{
    int roll_no;
    char name[30];
    float chemmarks, mathsmarks, phymarks;
};


 main() {
	
    struct Marks marks[5];
    int i;
    
    
    for( i=0; i<5; i++)
	{
		printf("Student %d\n",i+1);
        printf("enter roll no. :\n");
        scanf("%d", &marks[i].roll_no);
        printf("enter name :\n");
        scanf("%s",marks[i].name);
        printf("enter Chemistry marks :\n");
        scanf("%f", &marks[i].chemmarks);
        printf("enter Maths marks :\n");
        scanf("%f", &marks[i].mathsmarks);
        printf("enter Physics marks :\n");
        scanf("%f", &marks[i].phymarks);
    }
    for(i=0; i<5; i++) 
	{
	    printf("Student %d\n",i+1);
	    float percentage = (marks[i].chemmarks + marks[i].mathsmarks + marks[i].phymarks)/300.0*100;
	    printf("Percentage : %f\n", percentage);
	}
}

