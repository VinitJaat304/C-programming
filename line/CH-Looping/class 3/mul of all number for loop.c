#include <stdio.h>

main() 
{
    int n, a;
    int mul = 1;
    
    printf("Enter any number: ");
    scanf("%d", &n);
    
    for(a = 1; a <= n; a++)
        mul = mul * a;
		printf("mul of all number :%d\n", mul);    
}
