//10.c demonstrate pointer usage. Use a pointer Usage
#include <stdio.h>
int main()
{
    int num = 10;
    int *ptr;
    /* Pointer stores the address of num */
    ptr = &num;
    printf("Original value of num = %d\n", num);
    /* Modify value using pointer */
    *ptr = 25;
    printf("Modified value of num = %d\n", num);
}

// And the Modifys The Variables Of the And Printerss the REsultss .
#include <stdio.h>
int main()
{
    int num;
    int *ptr;
    printf("Enter a number: ");
    scanf("%d", &num);
    ptr = &num;
    printf("Original value = %d\n", num);
    *ptr = *ptr + 10;
    printf("Value after modification using pointer = %d\n", num);
}
