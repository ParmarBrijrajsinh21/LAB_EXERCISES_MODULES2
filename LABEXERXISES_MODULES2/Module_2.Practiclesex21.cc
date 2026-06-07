//21.• Write a C program that takes an integer from the user and calculates the sum of its digits

#include <stdio.h>
int main()
{
    int num, rem, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("Sum of Digits = %d", sum);
}

//Reverses The numbers Of Digits :: 
#include <stdio.h>
int main()
{
    int num, rem, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }
    printf("Reverse Number = %d", reverse);
}


//Sum of Digits and Reverse Number in One Program
#include <stdio.h>
int main()
{
    int num, temp, rem;
    int sum = 0, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(temp != 0)
    {
        rem = temp % 10;
        sum += rem;
        reverse = reverse * 10 + rem;
        temp /= 10;
    }
    printf("Sum of Digits = %d\n", sum);
    printf("Reverse Number = %d", reverse);
}

// Patteren 1
#include <stdio.h>
int main()
{
    int i, j;
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
//Patterns2
#include <stdio.h>
int main()
{
    int i, j;
    for(i = 5; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

//Patterns 3 
#include <stdio.h>
int main()
{
    int i, j;
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
///Patterns 4 
#include <stdio.h>
int main()
{
    int i, j, num = 1;
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", num++);
        }
        printf("\n");
    }
}
//Patternss 5 
#include <stdio.h>
int main()
{
    int i, j, space;
    for(i = 1; i <= 5; i++)
    {
        for(space = 1; space <= 5 - i; space++)
        printf(" ");
        for(j = 1; j <= (2 * i - 1); j++)
        printf("*");
        printf("\n");
    }
}
