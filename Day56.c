#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int i, j;
    int nextGreater;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Next greater elements:\n");

    for (i = 0; i < n; i++)
    {
        nextGreater = -1;

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                nextGreater = arr[j];
                break;
            }
        }

        printf("%d ", nextGreater);
    }

    return 0;
}