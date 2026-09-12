#include <stdio.h>

int main()
{
    int arr[100], n, i, search;
    int low, high, mid;
    int found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the sorted elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == search)
        {
            found = 1;
            break;
        }
        else if (search > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (found == 1)
    {
        printf("Element found at position %d", mid + 1);
    }
    else
    {
        printf("Element not found");
    }

    return 0;
}