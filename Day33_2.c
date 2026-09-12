#include <stdio.h>

int main()
{
    int arr[100], n, i, element, position;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the sorted elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    position = n;

    for (i = 0; i < n; i++)
    {
        if (element < arr[i])
        {
            position = i;
            break;
        }
    }

    for (i = n; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    n++;

    printf("Array after insertion:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}