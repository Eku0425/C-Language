#include<stdio.h>
#include<conio.h>

float add(float a,float b)
{
    return a + b;
}
float subtract(float a, float b)
{
    return a - b;
}
float multiply(float a, float b)
{
    return a * b;
}
float divide(float a, float b)
{
    return a / b;
}

main() 
{
    int choice;
    float num1, num2;

    printf("Welcome to the calculator!\n");

    while (1)
	 {
        printf("Please select an operation:\n");
        printf("1 Add\n");
        printf("2 Subtract\n");
        printf("3 Multiply\n");
        printf("4 Divide\n");
        printf("0. Exit\n\n");

        printf("Enter the operation : ");
        scanf("%d", &choice);

        if (choice == 0) 
        {
            printf("Thank you for using the calculator!\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%f", &num1);

        printf("Enter the second number: ");
        scanf("%f", &num2);
        printf("\n");

        switch (choice) 
        
        {
            case 1 :
                printf("Result: %.2f\n\n",add(num1, num2));
                break;
            case 2 :
                printf("Result: %.2f\n\n",subtract(num1, num2));
                break;
            case 3 :
                printf("Result: %.2f\n\n",multiply(num1, num2));
                break;
            case 4 :
                if (num2 != 0) 
                {
                    printf("Result: %.2f\n\n",divide(num1, num2));
                } else 
                {
                    printf("Cannot divide by zero\n\n");
                }
                break;
            default:
                printf("Invalid input. Please try again.\n\n");
        }
    }
}