#include <stdio.h>

int main()
{
    int n, original, digit, factorial, sum = 0;
    int i;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        digit = n % 10;

        factorial = 1;

        for (i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;

        n = n / 10;
    }

    if (sum == original)
    {
        printf("The number is a strong number");
    }
    else
    {
        printf("The number is not a strong number");
    }

    return 0;
}