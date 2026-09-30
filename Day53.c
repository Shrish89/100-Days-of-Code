#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int i;
    int totalSum = 0;
    int leftSum = 0;
    int pivotIndex = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        totalSum = totalSum + arr[i];
    }

    for (i = 0; i < n; i++)
    {
        totalSum = totalSum - arr[i];

        if (leftSum == totalSum)
        {
            pivotIndex = i;
            break;
        }

        leftSum = leftSum + arr[i];
    }

    printf("Pivot index: %d\n", pivotIndex);

    return 0;
}