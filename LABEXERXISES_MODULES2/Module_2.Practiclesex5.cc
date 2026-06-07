//5.(A.)if numbers are odd or even or the ODD usings An if-else Statements.
#include <stdio.h>
int main() 
{
    int num, month;

    // Even Odd Check
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0) 
	{
        printf("Number is EVEN\n");
    } else 
	{
        printf("Number is ODD\n");
    }

    // Month using switch
    printf("\nEnter month number (1-12): ");
    scanf("%d", &month);

    switch(month);
	{
        case 1: printf("January"); break;
        case 2: printf("February"); break;
        case 3: printf("March"); break;
        case 4: printf("April"); break;
        case 5: printf("May"); break;
        case 6: printf("June"); break;
        case 7: printf("July"); break;
        case 8: printf("August"); break;
        case 9: printf("September"); break;
        case 10: printf("October"); break;
        case 11: printf("November"); break;
        case 12: printf("December"); break;
        default: printf("Invalid month");
    }
}

//(B.):: Maximum OF 3 numberss Usings thee  TErmaryss Operatrs 
#include <stdio.h>
int main() 
{
    int a, b, c, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Maximum number = %d\n", max);
}

//(C.):: profit and loss on the transactions 
#include <stdio.h>
int main() 
{
    float costPrice, sellingPrice;

    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    if(sellingPrice > costPrice) 
	{
        printf("Profit = %.2f\n", sellingPrice - costPrice);
    } 
    else if(costPrice > sellingPrice) 
	{
        printf("Loss = %.2f\n", costPrice - sellingPrice);
    } 
    else 
	{
        printf("No Profit No Loss\n");
    }
}


