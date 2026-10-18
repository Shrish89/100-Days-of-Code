
#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], merged[200];
    int m, n;
    int i, j, k;

    printf("Enter the size of first array: ");
    scanf("%d", &m);

    printf("Enter the first sorted array:\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d", &n);

    printf("Enter the second sorted array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    while (i < m && j < n)
    {
        if (arr1[i] <= arr2[j])
        {
            merged[k] = arr1[i];
            i++;
        }
        else
        {
            merged[k] = arr2[j];
            j++;
        }

        k++;
    }

    while (i < m)
    {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n)
    {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    printf("Merged sorted array:\n");

    for (i = 0; i < m + n; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}
