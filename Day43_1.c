#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, length = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    while (str[length] != '\0')
    {
        if (str[length] == '\n')
        {
            break;
        }

        length++;
    }

    printf("Reversed string: ");

    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}