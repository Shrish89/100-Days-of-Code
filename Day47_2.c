#include <stdio.h>

int main()
{
    char str[200];
    char longest[100];
    int i = 0, j = 0;
    int maxLength = 0, currentLength = 0;

    printf("Enter a sentence: ");
    fgets(str, 200, stdin);

    while (str[i] != '\0')
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            currentLength++;
        }
        else
        {
            if (currentLength > maxLength)
            {
                maxLength = currentLength;

                for (j = 0; j < currentLength; j++)
                {
                    longest[j] = str[i - currentLength + j];
                }

                longest[currentLength] = '\0';
            }

            currentLength = 0;
        }

        i++;
    }

    /* Check the last word */
    if (currentLength > maxLength)
    {
        maxLength = currentLength;

        for (j = 0; j < currentLength; j++)
        {
            longest[j] = str[i - currentLength + j];
        }

        longest[currentLength] = '\0';
    }

    printf("Longest word = %s\n", longest);
    printf("Length = %d\n", maxLength);

    return 0;
}