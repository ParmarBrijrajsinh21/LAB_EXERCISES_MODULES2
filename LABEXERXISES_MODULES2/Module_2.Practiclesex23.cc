//23.LAB EXERCISE 2: Matrix Addition • Write a C program that accepts two 2x2 matrices from the user and adds them. Display the
 
 #include <stdio.h>
int main()
{
    int A[2][2], B[2][2], C[2][2];
    int i, j;
    printf("Enter elements of First Matrix (2x2):\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of Second Matrix (2x2):\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\nResultant Matrix:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}

//adds the 3x3 Matrixx 
#include <stdio.h>
int main()
{
    int A[3][3], B[3][3], C[3][3];
    int i, j;
    printf("Enter elements of First Matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of Second Matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\nSum Matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}

//Matrix Multiplications 
#include <stdio.h>
int main()
{
    int A[3][3], B[3][3], C[3][3];
    int i, j, k;
    printf("Enter elements of First Matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of Second Matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            C[i][j] = 0;

            for(k = 0; k < 3; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("\nMultiplication Matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}
