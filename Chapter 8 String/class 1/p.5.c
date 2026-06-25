#include <stdio.h>

main()
{
    char name[50];

    printf("Enter your Name: ");
    scanf("%[^\n]", name);

    for (int i = 1; name[i] != '\0'; i++)
    {
         if (name[0] >= 'a' && name[0] <= 'z')
        {
            name[0] -= 32;
        }
        else if (name[i - 1] == ' ' && name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] -= 32;
        }
    }

    printf("Title Case: %s\n", name);
}
