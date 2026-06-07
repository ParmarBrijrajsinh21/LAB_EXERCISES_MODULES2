//17.LAB EXERCISE 2: Number Comparison  program that takes three numbers from the user and determines:

#include <stdio.h>
int main()
{
    int a, b, c;
    int largest, smallest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    /* Find Largest */
    if(a >= b && a >= c)
        largest = a;
    else if(b >= a && b >= c)
        largest = b;
    else
        largest = c;

    /* Find Smallest */
    if(a <= b && a <= c)
        smallest = a;
    else if(b <= a && b <= c)
        smallest = b;
    else
        smallest = c;
    printf("Largest Number = %d\n", largest);
    printf("Smallest Number = %d\n", smallest);
}

//Programs 2 usings Switck Case 
#include <stdio.h>
int main()
{
    int a, b, c;
    int largestCase, smallestCase;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    /* Determine Largest */
    if(a >= b && a >= c)
        largestCase = 1;
    else if(b >= a && b >= c)
        largestCase = 2;
    else
        largestCase = 3;

    /* Determine Smallest */
    if(a <= b && a <= c)
        smallestCase = 1;
    else if(b <= a && b <= c)
        smallestCase = 2;
    else
        smallestCase = 3;
    switch(largestCase)
    {
        case 1:
            printf("Largest Number = %d\n", a);
            break;
        case 2:
            printf("Largest Number = %d\n", b);
            break;
        case 3:
            printf("Largest Number = %d\n", c);
            break;
    }
    switch(smallestCase)
    {
        case 1:
            printf("Smallest Number = %d\n", a);
            break;
        case 2:
            printf("Smallest Number = %d\n", b);
            break;
        case 3:
            printf("Smallest Number = %d\n", c);
            break;
    }
}
