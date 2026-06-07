//12.C Program: Structure to Store Student Details Using Array of Structures
#include <stdio.h>
struct Student
{
    char name[50];
    int rollNo;
    float marks;
};
int main()
{
    struct Student s[3];
    int i;
    /* Input Student Details */
    for(i = 0; i < 3; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].rollNo);
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }
    /* Display Student Details */
    printf("\n\nStudent Details:\n");
    for(i = 0; i < 3; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name        : %s\n", s[i].name);
        printf("Roll Number : %d\n", s[i].rollNo);
        printf("Marks       : %.2f\n", s[i].marks);
    }
}

//Alternative Version 
#include <stdio.h>
typedef struct
{
    char name[50];
    int rollNo;
    float marks;
} Student;
int main()
{
    Student s[3];
    int i;
    for(i = 0; i < 3; i++)
    {
        printf("\nEnter Name, Roll Number and Marks:\n");
        scanf("%s %d %f", s[i].name, &s[i].rollNo, &s[i].marks);
    }
    printf("\nStudent Details:\n");
    for(i = 0; i < 3; i++)
    {
        printf("\n%s\t%d\t%.2f",
               s[i].name,
               s[i].rollNo,
               s[i].marks);
    }
}


