//20.LAB EXERCISE 1: Prime Number Check  checks whether a given number is a prime number or not using a for

#include <stdio.h>
int main()
{
    int num, i, flag = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num <= 1)
    {
        flag = 0;
    }
    else
    {
        for(i = 2; i < num; i++)
        {
            if(num % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if(flag == 1)
        printf("%d is a Prime Number", num);
    else
        printf("%d is not a Prime Number", num);
}
