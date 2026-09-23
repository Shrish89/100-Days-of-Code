#include <stdio.h>

int main()
{
    char str[100];
    int count[26] = {0};
    int i = 0;
    int found = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count[str[i] - 'a']++;

            if (count[str[i] - 'a'] == 2)
            {
                printf("First repeating lowercase alphabet = %c\n", str[i]);
                found = 1;
                break;
            }
        }

        i++;
    }

    if (found == 0)
    {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}