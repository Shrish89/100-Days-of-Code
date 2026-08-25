#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("The character is an uppercase alphabet");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("The character is a lowercase alphabet");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("The character is a digit");
    }
    else
    {
        printf("The character is a special character");
    }

    return 0;
}