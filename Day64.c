
#include <stdio.h>

int main()
{
    char s[100];
    int i, j;
    int length = 0;
    int maxLength = 0;
    int repeated;

    printf("Enter a string: ");
    scanf("%99s", s);

    for (i = 0; s[i] != '\0'; i++)
    {
        length = 0;

        for (j = i; s[j] != '\0'; j++)
        {
            repeated = 0;

            for (int k = i; k < j; k++)
            {
                if (s[k] == s[j])
                {
                    repeated = 1;
                    break;
                }
            }

            if (repeated == 1)
            {
                break;
            }

            length++;
        }

        if (length > maxLength)
        {
            maxLength = length;
        }
    }

    printf("Length of longest substring: %d\n", maxLength);

    return 0;
}
