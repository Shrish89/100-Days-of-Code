#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int i, j;
    int previousGreater;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Previous greater elements:\n");

    for (i = 0; i < n; i++)
    {
        previousGreater = -1;

        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                previousGreater = arr[j];
                break;
            }
        }

        printf("%d ", previousGreater);
    }

    return 0;
}