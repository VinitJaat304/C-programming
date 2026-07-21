#include <stdio.h>

main() 
{ 
    int a;
    int b = 0;
    printf("Enter any number : ");
    scanf("%d", &a); 

   for (; a > 0; a /= 10)
   if (a == 0) 
	{
        b = 1;
    } else 
	{
        if (a <= 0) 
		{
            a = a;
        } 
        {
            b++; 
        }
    } 
    
    printf("Total number of digits: %d\n", b);
}
