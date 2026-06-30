#include <stdio.h>

int cube()
{
    int a;
    printf("enter any number :");
    scanf("%d", &a);
    return a * a * a;
}

void main()
{
    printf("%d", cube());
}