//22.LAB EXERCISE 1: Maximum and Minimum in Array  a C program that accepts 10 integers from the user and stores them in an array. The

#include <stdio.h>
int main()
{
    int arr[10];
    int i, max, min;
    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = min = arr[0];
    for(i = 1; i < 10; i++)
    {
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];
    }
    printf("Maximum Value = %d\n", max);
    printf("Minimum Value = %d\n", min);
}

//Sort to the Arrays in Ascendings Orders 
#include <stdio.h>
int main()
{
    int arr[10];
    int i, j, temp;
    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    /* Sorting in Ascending Order */
    for(i = 0; i < 9; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nArray in Ascending Order:\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}

//Combined Program: Maximum, Minimum, and Ascending Sort 
#include <stdio.h>
int main()
{
    int arr[10];
    int i, j, temp;
    int max, min;
    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = min = arr[0];
    for(i = 1; i < 10; i++)
    {
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];
    }
    for(i = 0; i < 9; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nMaximum Value = %d", max);
    printf("\nMinimum Value = %d", min);
    printf("\n\nArray in Ascending Order:\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}
