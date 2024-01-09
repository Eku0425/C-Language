// wap to swap two variables without using the third variable and using a pointer.

#include <stdio.h>

void swap(int *a, int *b)
{

    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

 main()
 
{
    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    
    swap(&x, &y);

    printf("After swapping: x = %d\n", x);
    printf("After swapping: y = %d\n",y);
    
}

