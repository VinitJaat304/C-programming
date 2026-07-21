#include<stdio.h>
#include"FUNCTION.c"

void main()
{
    int size ;
    printf("enter the number of element :");
    size = input();

    int a[size];

    arrayinput(size,a);

    int ans = SumOfArrayElements(size,a);
    
    printf("\nSum of Array :%d",ans);
}