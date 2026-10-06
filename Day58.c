#include <stdio.h>

int main()
{
    int nums[100];
    int answer[100];
    int n;
    int i;
    int product = 1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++)
    {
        product = 1;

        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                product = product * nums[j];
            }
        }

        answer[i] = product;
    }

    printf("Answer array:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", answer[i]);
    }

    return 0;
}