//4.Operators In C :: arithmetic, relational, logicals 
//(A.)
#include <stdio.h>
int main() 
{
    int a, b;
    // Input from user
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Arithmetic Operations
    printf("\n--- Arithmetic Operations ---\n");
    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);

    if(b != 0) 
	{
        printf("Division = %d\n", a / b);
        printf("Modulus = %d\n", a % b);
    } else 
	{
        printf("Division & Modulus not possible (b = 0)\n");
    }

    // Relational Operations
    printf("\n--- Relational Operations ---\n");
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);

    // Logical Operations
    printf("\n--- Logical Operations ---\n");
    printf("(a>0 && b>0) : %d\n", (a > 0 && b > 0));
    printf("(a>0 || b>0) : %d\n", (a > 0 || b > 0));
    printf("!(a>0)       : %d\n", !(a > 0));

}

//(B.)Find areas and Circumferences OF Circles ::
#include <stdio.h>
int main() 
{
    float r, area, circumference;
    const float PI = 3.14;
    printf("Enter radius: ");
    scanf("%f", &r);
    area = PI * r * r;
    circumference = 2 * PI * r;
    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

}

//(C.)::Finds Formulas OF Ares
#include <stdio.h>
int main() 
{
    float a, b, h;
    // Square
    printf("Enter side of square: ");
    scanf("%f", &a);
    printf("Area of Square = %.2f\n", a * a);
    // Cube Surface Area
    printf("\nEnter side of cube: ");
    scanf("%f", &a);
    printf("Surface Area of Cube = %.2f\n", 6 * a * a);

    // Triangle
    printf("\nEnter base and height of triangle: ");
    scanf("%f %f", &b, &h);
    printf("Area of Triangle = %.2f\n", 0.5 * b * h);
}

//(D.)::how many Apples Requrired 
#include <stdio.h>
int main() 
{
    int students, apples;
    printf("Enter number of students: ");
    scanf("%d", &students);
    apples = students * 5;
    printf("Total apples required = %d\n", apples);
}

//(E.):: find character values from ascii
#include <stdio.h>
int main() 
{
    int num;
    printf("Enter ASCII value: ");
    scanf("%d", &num);
    printf("Character = %c\n", num);
}

//(F.):: Findss  ascii of givens  Numberss::
#include <stdio.h>
int main() 
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("ASCII value = %d\n", ch);
}
