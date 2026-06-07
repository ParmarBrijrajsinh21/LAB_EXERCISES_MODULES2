//32.Program 1: Generate Pascal's Triangle Using Loops
#include <stdio.h>
int main()
{
    int rows, i, j, num;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for(i = 0; i < rows; i++)
    {
        num = 1;
        for(j = 0; j < rows - i - 1; j++)
        {
            printf("  ");
        }
        for(j = 0; j <= i; j++)
        {
            printf("%4d", num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }
}
//Challenge: Pascal's Triangle Using Recursion
#include <stdio.h>
int combination(int n, int r)
{
    if(r == 0 || r == n)
    return 1;
    return combination(n - 1, r - 1) +
    combination(n - 1, r);
}
int main()
{
    int rows, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < rows - i - 1; j++)
        {
            printf("  ");
        }
        for(j = 0; j <= i; j++)
        {
            printf("%4d", combination(i, j));
        }
        printf("\n");
    }
}

//Alternative Simple Pascal Triangle Program
#include <stdio.h>
int main()
{
    int i, j, rows;
    int value;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for(i = 0; i < rows; i++)
    {
        value = 1;
        for(j = 0; j <= i; j++)
        {
            printf("%d ", value);
            value = value * (i - j) / (j + 1);
        }
        printf("\n");
    }
}


