#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    while (str[i] != '\0')
    {
        if (str[i] == '\n')
        {
            break;
        }

        i++;
    }

    printf("Number of characters = %d\n", i);

    return 0;
}