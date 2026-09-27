#include <stdio.h>

int main()
{
    char name[100];
    int i = 0;
    int lastSpace = 0;

    printf("Enter your full name: ");
    fgets(name, 100, stdin);

    printf("%c. ", name[0]);

    while (name[i] != '\0')
    {
        if (name[i] == ' ')
        {
            lastSpace = i;
        }

        i++;
    }

    i = 0;

    while (i < lastSpace)
    {
        if (name[i] == ' ' && name[i + 1] != ' ')
        {
            printf("%c. ", name[i + 1]);
        }

        i++;
    }

    i = lastSpace + 1;

    while (name[i] != '\0' && name[i] != '\n')
    {
        printf("%c", name[i]);
        i++;
    }

    printf("\n");

    return 0;
}