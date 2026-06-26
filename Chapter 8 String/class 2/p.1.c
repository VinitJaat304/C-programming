#include <stdio.h>
#include <string.h>

main()
{
    char name[50];

    printf("Enter your name :");
    gets(name);
    puts(name);

    printf("length : %d\n", strlen(name));

    printf("UPPERCASE : %s\n", strupr(name));

    printf("LOWERCASE : %s\n", strlwr(name));

    printf("reverse : %s", strrev(name));
}