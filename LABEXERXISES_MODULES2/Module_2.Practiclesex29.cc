//29.LAB EXERCISE 2: Count Vowels and Consonants Write a C program that takes a string from the user and counts the number of vowels and

#include <stdio.h>
int main()
{
    char str[100];
    int i = 0;
    int vowels = 0, consonants = 0;
    printf("Enter a string: ");
    gets(str);
    while(str[i] != '\0')
    {
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z'))
        {
            if(str[i]=='A' || str[i]=='E' || str[i]=='I' ||
               str[i]=='O' || str[i]=='U' ||
               str[i]=='a' || str[i]=='e' || str[i]=='i' ||
               str[i]=='o' || str[i]=='u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        i++;
    }
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
}

//Challenge: Count Vowels, Consonants, Digits, and Special Characters
#include <stdio.h>
int main()
{
    char str[100];
    int i = 0;
    int vowels = 0, consonants = 0;
    int digits = 0, special = 0;
    printf("Enter a string: ");
    gets(str);
    while(str[i] != '\0')
    {
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z'))
        {
            if(str[i]=='A' || str[i]=='E' || str[i]=='I' ||
               str[i]=='O' || str[i]=='U' ||
               str[i]=='a' || str[i]=='e' || str[i]=='i' ||
               str[i]=='o' || str[i]=='u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if(str[i] != ' ')
        {
            special++;
        }
        i++;
    }
    printf("\nVowels = %d", vowels);
    printf("\nConsonants = %d", consonants);
    printf("\nDigits = %d", digits);
    printf("\nSpecial Characters = %d", special);
}

//Alternative Version Using Functions
#include <stdio.h>
int main()
{
    char str[100];
    int i;
    int vowels = 0, consonants = 0, digits = 0, special = 0;
    printf("Enter a string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z'))
        {
            switch(str[i])
            {
                case 'A': case 'E': case 'I': case 'O': case 'U':
                case 'a': case 'e': case 'i': case 'o': case 'u':
                    vowels++;
                    break;

                default:
                    consonants++;
            }
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if(str[i] != ' ')
        {
            special++;
        }
    }
    printf("\nVowels = %d", vowels);
    printf("\nConsonants = %d", consonants);
    printf("\nDigits = %d", digits);
    printf("\nSpecial Characters = %d", special);
}
