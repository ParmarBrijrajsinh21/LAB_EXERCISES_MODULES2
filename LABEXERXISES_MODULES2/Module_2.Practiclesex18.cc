//18.LAB EXERCISE 3: Temperature calculation a C program to read temperature in centigrade and display a suitable message according

#include <stdio.h>
int main()
{
    float temp;
    printf("Enter temperature in Centigrade: ");
    scanf("%f", &temp);
    if(temp < 0)
    {
        printf("Freezing Weather");
    }
    else if(temp >= 0 && temp < 10)
    {
        printf("Very Cold Weather");
    }
    else if(temp >= 10 && temp < 20)
    {
        printf("Cold Weather");
    }
    else if(temp >= 20 && temp < 30)
    {
        printf("Normal Temperature");
    }
    else if(temp >= 30 && temp < 40)
    {
        printf("It's Hot");
    }
    else
    {
        printf("It's Very Hot");
    }
}

