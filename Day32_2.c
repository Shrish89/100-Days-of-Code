#include <stdio.h>

int main()
{
    int n, digit;
    int count[10] = {0};
    int i, maxCount = 0, maxDigit = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (i = 0; i < 10; i++)
    {
        if (count[i] > maxCount)
        {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Most occurring digit = %d", maxDigit);

    return 0;
}