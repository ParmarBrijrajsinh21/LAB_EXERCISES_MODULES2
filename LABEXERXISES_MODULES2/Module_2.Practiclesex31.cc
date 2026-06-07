//31.• Write a C program that checks whether a given number is an Armstrong number or not (e.g.,

#include <stdio.h>
int main()
{
    int num, temp, rem;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }
    if(sum == num)
    printf("%d is an Armstrong Number", num);
    else
    printf("%d is Not an Armstrong Number", num);
}
//Challenge: Find All Armstrong Numbers Between 1 and 1000
#include <stdio.h>
int main()
{
    int num, temp, rem, sum;
    printf("Armstrong Numbers between 1 and 1000 are:\n");
    for(num = 1; num <= 1000; num++)
    {
        temp = num;
        sum = 0;
        while(temp != 0)
        {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }
        if(sum == num)
        {
            printf("%d ", num);
        }
    }
}

//Using a Function
#include <stdio.h>
int isArmstrong(int num)
{
    int temp, rem, sum = 0;
    temp = num;
    while(temp != 0)
    {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }
    return (sum == num);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(isArmstrong(num))
    printf("Armstrong Number");
    else
    printf("Not an Armstrong Number");
}
