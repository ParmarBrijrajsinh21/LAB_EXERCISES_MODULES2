//27.• Write a C program that takes a number as input and checks whether it is a palindrome using

#include <stdio.h>
int isPalindrome(int num)
{
    int original, reverse = 0, rem;
    original = num;
    while(num != 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }
    if(original == reverse)
        return 1;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(isPalindrome(num))
    printf("%d is a Palindrome Number", num);
    else
    printf("%d is Not a Palindrome Number", num);
}

//Challenge: Check Whether a String is Palindrome
#include <stdio.h>
#include <string.h>
int isPalindrome(char str[])
{
    int i, len;
    len = strlen(str);
    for(i = 0; i < len / 2; i++)
    {
    if(str[i] != str[len - 1 - i])
    return 0;
    }
    return 1;
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if(isPalindrome(str))
    printf("Palindrome String");
    else
    printf("Not a Palindrome String");
}

//Alternative String Palindrome Program (Without Using strlen())
#include <stdio.h>
int isPalindrome(char str[])
{
    int len = 0, i;
    while(str[len] != '\0')
    {
        len++;
    }
    for(i = 0; i < len / 2; i++)
    {
    if(str[i] != str[len - i - 1])
    return 0;
    }
    return 1;
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if(isPalindrome(str))
    printf("Palindrome String");
    else
    printf("Not a Palindrome String");
}
