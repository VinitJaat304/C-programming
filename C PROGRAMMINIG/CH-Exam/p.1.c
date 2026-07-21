#include <stdio.h>

void main()
{
    int a, b, c, sum;

    printf("Enter a 3-digit positive integer: ");
    scanf("%d", &a);

    if (a < 100 || a > 999)
    {
        printf("Please enter a 3-digit positive integer.\n");
    }
    else
    {
        b = a / 100;
        c = a % 10;

        sum = b + c;

        printf("Sum of first and last digit = %d\n", sum);
    }

}