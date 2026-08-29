#include <stdio.h>

int main()
{
    int n, remainder, i = 0;
    int binary[20];

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        remainder = n % 2;
        binary[i] = remainder;
        n = n / 2;
        i++;
    }

    printf("Binary = ");

    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    return 0;
}