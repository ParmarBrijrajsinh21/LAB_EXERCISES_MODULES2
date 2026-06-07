//9.1. Store 5 Integers in a One-Dimensional Array and Print Them
#include <stdio.h>
int main()
{
    int arr[5];
    int i;
    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nElements of Array:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}

//2.Accepts Numbersa from users Stores On Arrayrs 
#include <stdio.h>
int main()
{
    int a[3][3];
    int i, j, sum = 0;
    printf("Enter 9 elements for 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }
    printf("\nMatrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nSum of all elements = %d", sum);
}

//3.Converts Arrays Intoo ASCE AND DEC Orders :: 
#include <stdio.h>
int main()
{
    int arr[10];
    int i;
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nStored Numbers:\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}

//4.Findss A MAx Elementss From  THE Arrayss:: 
#include <stdio.h>
int main()
{
    int arr[10], i, j, temp, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    /* Ascending Order */
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nAscending Order:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    /* Descending Order */
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n\nDescending Order:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
