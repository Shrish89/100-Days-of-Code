#include <stdio.h>

int main()
{
    int n, x;
    int leftSum, rightSum;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (x = 1; x <= n; x++)
    {
        leftSum = x * (x + 1) / 2;
        rightSum = (x + n) * (n - x + 1) / 2;

        if (leftSum == rightSum)
        {
            printf("Pivot integer: %d\n", x);
            return 0;
        }
    }

    printf("Pivot integer: -1\n");

    return 0;
}