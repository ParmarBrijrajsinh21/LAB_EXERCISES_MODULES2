//11.Concatenate Two Strings Using strcat and Find Length Using strlen.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    strcat(str1, str2);
    printf("\nConcatenated String = %s", str1);
    printf("\nLength of String = %d", strlen(str1));
}
//2. Find Length of a String Without Using Inbuilt Function
#include <stdio.h>
int main()
{
    char str[100];
    int length = 0;
    printf("Enter a string: ");
    gets(str);
    while(str[length] != '\0')
    {
        length++;
    }
    printf("Length of String = %d", length);
}

//3.. Join Two Strings Using User Defined Function (Without Inbuilt Function)
#include <stdio.h>
void joinString(char str1[], char str2[])
{
    int i = 0, j = 0;
    while(str1[i] != '\0')
    {
        i++;
    }
    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}
int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    joinString(str1, str2);
    printf("Joined String = %s", str1);
}

//4.Accept String from User and Check Whether It Is Palindrome or Not
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, len, flag = 1;
    printf("Enter a string: ");
    gets(str);
    len = strlen(str);
    for(i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - 1 - i])
        {
            flag = 0;
            break;
        }
    }
    if(flag)
        printf("Palindrome String");
    else
        printf("Not a Palindrome String");
}
