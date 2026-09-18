#include <stdio.h>

int main()
{
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int rows1, columns1, rows2, columns2;
    int i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &columns1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &columns2);

    if (columns1 != rows2)
    {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    printf("Enter elements of first matrix:\n");

    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < columns1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");

    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < columns2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < columns2; j++)
        {
            result[i][j] = 0;

            for (k = 0; k < columns1; k++)
            {
                result[i][j] = result[i][j] + matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Result of matrix multiplication:\n");

    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < columns2; j++)
        {
            printf("%d ", result[i][j]);
        }

        printf("\n");
    }

    return 0;
}