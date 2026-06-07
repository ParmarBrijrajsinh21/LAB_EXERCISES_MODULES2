//26.• Write a C program that calculates the factorial of a given number using a function.


#include <stdio.h>
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
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d = %lld", num, factorial(num));
}
//program2. Factorial using the Recursions 
#include <stdio.h>
long long factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d = %lld", num, factorial(num));
}

//Comparison lative and Recursions 
#include <stdio.h>
long long iterativeFactorial(int n)
{
    long long fact = 1;
    int i;
    for(i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
long long recursiveFactorial(int n)
{
    if(n == 0 || n == 1)
        return 1;
    return n * recursiveFactorial(n - 1);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Iterative Factorial = %lld\n",
    iterativeFactorial(num));
    printf("Recursive Factorial = %lld\n",
    recursiveFactorial(num));
}
