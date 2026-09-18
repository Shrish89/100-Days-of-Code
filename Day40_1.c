#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rows, columns;
    int i, j, k;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");

    for (k = 0; k < rows; k++)
    {
        i = k;
        j = 0;

        while (i >= 0 && j < columns)
        {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
    }

    for (k = 1; k < columns; k++)
    {
        i = rows - 1;
        j = k;

        while (i >= 0 && j < columns)
        {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
    }

    return 0;
}