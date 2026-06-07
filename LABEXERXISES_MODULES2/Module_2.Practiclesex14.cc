//14.EXTRA LAB EXERCISES FOR IMPROVING PROGRAMMING LOGIC 
//• Write a C program that acts as a simple calculator. The program should take two numbers d an operator as input from the user and perform the respective operation (addition,

#include <stdio.h>
int main()
{
    int num1, num2;
    char op;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%d", &num2);
    switch(op)
    {
        case '+':
            printf("Result = %d", num1 + num2);
            break;
        case '-':
            printf("Result = %d", num1 - num2);
            break;
        case '*':
            printf("Result = %d", num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("Result = %.2f", (float)num1 / num2);
            else
                printf("Division by zero is not allowed.");
            break;
        case '%':
            if(num2 != 0)
                printf("Result = %d", num1 % num2);
            else
                printf("Modulus by zero is not allowed.");
            break;
        default:
            printf("Invalid Operator!");
    }
}


