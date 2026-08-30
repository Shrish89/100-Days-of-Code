#include <stdio.h>

int main()
{
    int n, digit, i = 0;
    int binary[20];

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;

        if (digit == 0)
        {
            binary[i] = 1;
        }
        else
        {
            binary[i] = 0;
        }

        n = n / 10;
        i++;
    }

    printf("1's complement = ");

    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    return 0;
}