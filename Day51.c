#include <stdio.h>

int main()
{
    int nums[100];
    int n, target;
    int i;
    int first = -1, last = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the sorted array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            if (first == -1)
            {
                first = i;
            }

            last = i;
        }
    }

    printf("First occurrence: %d\n", first);
    printf("Last occurrence: %d\n", last);
    printf("Index of first occurrence: %d\n", first);
    printf("Index of last occurrence: %d\n", last);

    return 0;
}