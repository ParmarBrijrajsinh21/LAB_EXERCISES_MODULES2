//21.LAB EXERCISE 2: Multiplication Table te a C program that takes an integer input from the user and prints its multiplication

#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\nMultiplication Table of %d:\n", num);
    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

//Chanllenge 1to n
#include <stdio.h>
int main()
{
    int num, n, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the range (N): ");
    scanf("%d", &n);
    printf("\nMultiplication Table of %d:\n", num);
    for(i = 1; i <= n; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}


//Alternatives Versionss :: 
#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = 1; i <= 10; i++)
    {
        printf("%d ", num * i);
    }
}
