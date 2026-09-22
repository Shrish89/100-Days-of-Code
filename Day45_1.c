#include <stdio.h>

int main()
{
    char str[100];
    char ch;
    int i = 0;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    printf("Enter the character to find: ");
    scanf("%c", &ch);

    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            count++;
        }

        i++;
    }

    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}