//16.LAB EXERCISE 1: Grade Calculator

#include <stdio.h>
int main()
{
    float marks;
    printf("Enter student's marks: ");
    scanf("%f", &marks);
    if(marks > 90)
    {
        printf("Grade A");
    }
    else if(marks > 75 && marks <= 90)
    {
        printf("Grade B");
    }
    else if(marks > 50 && marks <= 75)
    {
        printf("Grade C");
    }
    else
    {
        printf("Grade D");
    }
}

//Alternatives Programs Usings 
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter student's marks: ");
    scanf("%d", &marks);
    switch(marks / 10)
    {
        case 10:
        case 9:
            printf("Grade A");
            break;

        case 8:
            printf("Grade B");
            break;

        case 7:
        case 6:
            printf("Grade C");
            break;

        default:
            printf("Grade D");
    }
}
