//24.LAB EXERCISE 3: Sum of Array Elements  program that takes N numbers from the user and stores them in an array. The

#include <stdio.h>
int main()
{
    int arr[100], n, i;
    int sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of all elements = %d", sum);
}

//Finds Sums And Averagesh 
#include <stdio.h>
int main()
{
    int arr[100], n, i;
    int sum = 0;
    float average;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = (float)sum / n;
    printf("\nSum = %d", sum);
    printf("\nAverage = %.2f", average);
}

//Alternative Version (Display Array, Sum, and Average)
#include <stdio.h>
int main()
{
    int arr[100], n, i, sum = 0;
    float avg;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);

        sum += arr[i];
    }
    avg = (float)sum / n;
    printf("\nArray Elements: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nSum = %d", sum);
    printf("\nAverage = %.2f", avg);
}
