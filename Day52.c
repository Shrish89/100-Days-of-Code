#include <stdio.h>

int main()
{
    int arr[100];
    int n, x;
    int i;
    int ceilIndex = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the sorted array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            ceilIndex = i;
            break;
        }
    }

    printf("Index of ceil: %d\n", ceilIndex);

    return 0;
}