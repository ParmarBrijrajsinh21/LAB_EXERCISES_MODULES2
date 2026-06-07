//34.Lab Challenge 4: Sum of Prime Numbers Description: Write a C program that calculates the sum of all prime numbers up to a given

#include <stdio.h>
int main()
{
    int n, i, j, isPrime;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 2; i <= n; i++)
    {
        isPrime = 1;
        for(j = 2; j <= i / 2; j++)
        {
            if(i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
        {
            sum += i;
        }
    }
    printf("Sum of Prime Numbers = %d", sum);
}

//Challenge: Print All Prime Numbers and Their Sum
#include <stdio.h>
int main()
{
    int n, i, j, isPrime;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 2; i <= n; i++)
    {
        isPrime = 1;
        for(j = 2; j <= i / 2; j++)
        {
            if(i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
        {
            sum += i;
        }
    }
    printf("Sum of Prime Numbers = %d", sum);
}

//Using the Functions
#include <stdio.h>
int isPrime(int num)
{
    int i;
    if(num < 2)
    return 0;
    for(i = 2; i <= num / 2; i++)
    {
        if(num % i == 0)
        return 0;
    }
    return 1;
}
int main()
{
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime Numbers:\n");
    for(i = 2; i <= n; i++)
    {
        if(isPrime(i))
        {
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\nSum = %d", sum);
}
