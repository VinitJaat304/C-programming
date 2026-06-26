#include <stdio.h>
#include <string.h>

main()
{
    char name[50];
    char surname[50];

    printf("Enter your name :");
    gets(name);
    printf("Enter your surname :");
    gets(surname);

    
    printf("comparison : %d",strcmp(name,surname));

    printf("\nMarge : %s",strcat(name,surname));

    printf("\ncopy  : %s",strcpy(name,surname));
}