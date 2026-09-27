#include <stdio.h>

int main()
{
    char str[100];
    int i, j, k;
    int length = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    printf("All substrings are:\n");

    for (i = 0; i < length; i++)
    {
        for (j = i; j < length; j++)
        {
            for (k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            printf("\n");
        }
    }

    return 0;
}