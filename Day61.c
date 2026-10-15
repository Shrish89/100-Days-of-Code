
#include <stdio.h>

int main()
{
    int arr[100];
    int n, k;
    int i, j;
    int firstNegative;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    printf("First negative integers:\n");

    for (i = 0; i <= n - k; i++)
    {
        firstNegative = 0;

        for (j = i; j < i + k; j++)
        {
            if (arr[j] < 0)
            {
                firstNegative = arr[j];
                break;
            }
        }

        printf("%d ", firstNegative);
    }

    return 0;
}
