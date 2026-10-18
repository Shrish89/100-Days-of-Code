
#include <stdio.h>

int main()
{
    int nums[100];
    int n, target;
    int i, j;
    int found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }

        if (found == 1)
        {
            break;
        }
    }

    if (found == 0)
    {
        printf("-1 -1\n");
    }

    return 0;
}
