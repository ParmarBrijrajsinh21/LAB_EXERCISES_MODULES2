//8. LAB EXERCISE:rite a C program that calculates the factorial of a number using a function
#include <stdio.h>
int main()
// Function Declaration
long long factorial(int n);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d = %lld", num, factorial(num));
}

// Function Definition
long long factorial(int n)
{
    long long fact = 1;
    int i;
    for(i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
