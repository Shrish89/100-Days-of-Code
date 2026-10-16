
#include <stdio.h>

int main()
{
    char s[100], t[100];
    int count1[26] = {0};
    int count2[26] = {0};
    int i;
    int anagram = 1;

    printf("Enter the first string: ");
    scanf("%99s", s);

    printf("Enter the second string: ");
    scanf("%99s", t);

    for (i = 0; s[i] != '\0'; i++)
    {
        count1[s[i] - 'a']++;
    }

    for (i = 0; t[i] != '\0'; i++)
    {
        count2[t[i] - 'a']++;
    }

    for (i = 0; i < 26; i++)
    {
        if (count1[i] != count2[i])
        {
            anagram = 0;
            break;
        }
    }

    if (anagram == 1)
    {
        printf("Anagram\n");
    }
    else
    {
        printf("Not Anagram\n");
    }

    return 0;
}
