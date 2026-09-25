#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j;
    int length1 = 0, length2 = 0;
    int rotation = 0;

    printf("Enter first string: ");
    fgets(str1, 100, stdin);

    printf("Enter second string: ");
    fgets(str2, 100, stdin);

    /* Find length of first string */
    while (str1[length1] != '\0' && str1[length1] != '\n')
    {
        length1++;
    }

    /* Find length of second string */
    while (str2[length2] != '\0' && str2[length2] != '\n')
    {
        length2++;
    }

    if (length1 == length2)
    {
        for (i = 0; i < length1; i++)
        {
            rotation = 1;

            for (j = 0; j < length1; j++)
            {
                if (str1[j] != str2[(i + j) % length1])
                {
                    rotation = 0;
                    break;
                }
            }

            if (rotation == 1)
            {
                break;
            }
        }
    }

    if (rotation == 1)
    {
        printf("The strings are rotations of each other.\n");
    }
    else
    {
        printf("The strings are not rotations of each other.\n");
    }

    return 0;
}