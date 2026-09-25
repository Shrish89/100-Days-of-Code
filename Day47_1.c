#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int count1[26] = {0};
    int count2[26] = {0};
    int i = 0;
    int anagram = 1;

    printf("Enter first string: ");
    fgets(str1, 100, stdin);

    printf("Enter second string: ");
    fgets(str2, 100, stdin);

    while (str1[i] != '\0')
    {
        if (str1[i] >= 'a' && str1[i] <= 'z')
        {
            count1[str1[i] - 'a']++;
        }

        i++;
    }

    i = 0;

    while (str2[i] != '\0')
    {
        if (str2[i] >= 'a' && str2[i] <= 'z')
        {
            count2[str2[i] - 'a']++;
        }

        i++;
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
        printf("The strings are anagrams.\n");
    }
    else
    {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}