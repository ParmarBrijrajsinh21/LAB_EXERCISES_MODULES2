//30.LAB EXERCISE 3: Word Count • Write a C program that counts the number of words in a sentence entered by the user.

#include <stdio.h>
int main()
{
    char str[200];
    int i, words = 0;
    printf("Enter a sentence: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++)
    {
        if((i == 0 && str[i] != ' ') ||
           (str[i] != ' ' && str[i - 1] == ' '))
        {
            words++;
        }
    }
    printf("Number of Words = %d", words);
}

//Challenge: Find the Longest Word in the Sentence
#include <stdio.h>
#include <string.h>
int main()
{
    char str[200], longest[50], word[50];
    int i = 0, j = 0;
    int maxLen = 0, len;
    printf("Enter a sentence: ");
    gets(str);
    while(1)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            word[j++] = str[i];
        }
        else
        {
            word[j] = '\0';
            len = strlen(word);
            if(len > maxLen)
            {
                maxLen = len;
                strcpy(longest, word);
            }
            j = 0;
            if(str[i] == '\0')
                break;
        }
        i++;
    }
    printf("Longest Word = %s\n", longest);
    printf("Length = %d", maxLen);
}

//Combined Program: Word Count and Longest Word
#include <stdio.h>
#include <string.h>
int main()
{
    char str[200], longest[50], word[50];
    int i, j = 0;
    int words = 0, maxLen = 0, len;
    printf("Enter a sentence: ");
    gets(str);
    for(i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            word[j++] = str[i];
        }
        else
        {
            if(j > 0)
            {
                word[j] = '\0';
                words++;
                len = strlen(word);
                if(len > maxLen)
                {
                    maxLen = len;
                    strcpy(longest, word);
                }
                j = 0;
            }
            if(str[i] == '\0')
                break;
        }
    }
    printf("\nNumber of Words = %d", words);
    printf("\nLongest Word = %s", longest);
    printf("\nLength = %d", maxLen);
}
