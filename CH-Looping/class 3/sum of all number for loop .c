#include <stdio.h>

main() 
{
    int n, a;
    int sum = 0;
    
    printf("Enter any number: ");
    scanf("%d", &n);
    
    for(a = 1; a <= n; a++)
        sum = sum + a;
		printf("sum of all number :%d\n", sum);    
}
