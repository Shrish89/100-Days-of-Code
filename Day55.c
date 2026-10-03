#include <stdio.h>

int main()
{
    int nums[100];
    int n, i, j;
    int count;
    int majority = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++)
    {
        count = 0;

        for (j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }

        if (count > n / 2)
        {
            majority = nums[i];
            break;
        }
    }

    printf("Majority element: %d\n", majority);

    return 0;
}