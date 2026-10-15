#include <stdio.h>

int main()
{
    int arr[100];
    int n, k;
    int i, j;
    int max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    printf("Maximum elements in each window:\n");

    for (i = 0; i <= n - k; i++)
    {
        max = arr[i];

        for (j = i + 1; j < i + k; j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
            }
        }

        printf("%d ", max);
    }

    return 0;
}