#include <stdio.h>

int main()
{
    char name[100];
    int i = 0;

    printf("Enter your full name: ");
    fgets(name, 100, stdin);

    if (name[0] != ' ')
    {
        printf("%c", name[0]);
    }

    while (name[i] != '\0')
    {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\n')
        {
            printf("%c", name[i + 1]);
        }

        i++;
    }

    printf("\n");

    return 0;
}