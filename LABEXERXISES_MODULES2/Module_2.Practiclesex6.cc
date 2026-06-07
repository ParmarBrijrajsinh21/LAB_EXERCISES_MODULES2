//6.loopings In C 1. Prints 1 to 10 Usings All Lops.
#include <stdio.h>
int main()
{
    int i;
    printf("Using for loop:\n");
    for(i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }

    printf("\n\nUsing while loop:\n");
    i = 1;
    while(i <= 10)
    {
        printf("%d ", i);
        i++;
    }

    printf("\n\nUsing do-while loop:\n");
    i = 1;
    do
    {
        printf("%d ", i);
        i++;
    } while(i <= 10);
}

//2.10 numberss are the Evesn or Odd Counts && SUMS 
#include <stdio.h>
int main()
{
    int num, i;
    int evenCount = 0, oddCount = 0;
    int evenSum = 0, oddSum = 0;
    printf("Enter 10 numbers:\n");
    for(i = 1; i <= 10; i++)
    {
        scanf("%d", &num);

        if(num % 2 == 0)
        {
            evenCount++;
            evenSum += num;
        }
        else
        {
            oddCount++;
            oddSum += num;
        }
    }

    printf("\nEven Numbers Count = %d", evenCount);
    printf("\nOdd Numbers Count = %d", oddCount);
    printf("\nSum of Even Numbers = %d", evenSum);
    printf("\nSum of Odd Numbers = %d", oddSum);
}

//3.reverses a numbers ::
#include <stdio.h>
int main()
{
    int num, reverse = 0, rem;

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

