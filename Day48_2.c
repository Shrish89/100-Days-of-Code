#include <stdio.h>

int main()
{
    char str[200];
    int i, start = 0, end;

    printf("Enter a sentence: ");
    fgets(str, 200, stdin);

    i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
            end = i - 1;

            while (start <= end)
            {
                printf("%c", str[end]);
                end--;
            }

            if (str[i] == ' ')
            {
                printf(" ");
            }

            start = i + 1;
        }

        i++;
    }

    return 0;
}