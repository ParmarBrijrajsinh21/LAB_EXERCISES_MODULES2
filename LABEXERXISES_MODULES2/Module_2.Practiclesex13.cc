//13.• LAB EXERCISE:C program to create a file, write a string into it, close the file, then open the file again to read and display its contents.
#include <stdio.h>
int main()
{
    FILE *fp;
    char str[100];
    /* Create and write to file */
    fp = fopen("sample.txt", "w");
    if(fp == NULL)
    {
        printf("Error creating file!");
        return 1;
    }
    printf("Enter a string: ");
    gets(str);
    fprintf(fp, "%s", str);
    fclose(fp);
    printf("\nData written successfully.\n");
    /* Open file for reading */
    fp = fopen("sample.txt", "r");
    if(fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }
    printf("\nContents of file:\n");
    while(fgets(str, sizeof(str), fp) != NULL)
    {
        printf("%s", str);
    }
    fclose(fp);
}

//Alternative Program :: 
#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("sample.txt", "w");
    fprintf(fp, "Hello, File Handling!");
    fclose(fp);
    fp = fopen("sample.txt", "r");
    printf("File Contents:\n");
    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
}
