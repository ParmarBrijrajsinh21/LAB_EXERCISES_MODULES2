//7.• LAB EXERCISE:a.Usings Breaks and Countinues 
#include <stdio.h>
int main()
{
    int i;
    for(i = 1; i <= 10; i++)
    {
        if(i == 5)
            break;
        printf("%d ", i);
    }
}
//b.Skipping the break numbers 3
#include <stdio.h>
int main()
{
    int i;
    for(i = 1; i <= 10; i++)
    {
        if(i == 3)
            continue;
        printf("%d ", i);
    }
}

//c.sum number of Usings WHiles Loops ::
#include <stdio.h>
int main()
{
    int n, i = 1, sum = 0;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    while(i <= n)
    {
        sum += i;
        i++;
    }
    printf("Sum = %d", sum);
}

//D. Armstrong numbers for useing the LOpps
#include <stdio.h>
int main()
{
    int num, temp, rem, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    for(; temp != 0; temp /= 10)
    {
        rem = temp % 10;
        sum += rem * rem * rem;
    }
    if(sum == num)
        printf("%d is an Armstrong Number", num);
    else
        printf("%d is not an Armstrong Number", num);
}

//e. Armstrong Numbers usien thw Whiles Loops
#include <stdio.h>
int main()
{
    int num, temp, rem, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(temp != 0)
    {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }
    if(sum == num)
        printf("%d is an Armstrong Number", num);
    else
        printf("%d is not an Armstrong Number", num);
}

//f. 5. Accept 5 Numbers and Display in Reverse Order Using Array and For Loop
#include <stdio.h>
int main()
{
    int arr[5];
    int i;
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nNumbers in Reverse Order:\n");
    for(i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}


