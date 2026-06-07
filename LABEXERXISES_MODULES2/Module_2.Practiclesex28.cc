//28.LAB EXERCISE 1: String Reversal  Write a C program that takes a string as input and reverses it using a function.
#include <stdio.h>
#include <string.h>
void reverseString(char str[])
{
    int i, len;
    char temp;
    len = strlen(str);
    for(i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    reverseString(str);
    printf("Reversed String = %s", str);
}
