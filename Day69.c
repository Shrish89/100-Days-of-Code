#include <stdio.h>
#include <stdlib.h>

#define MAX_VALUE 100000

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];
    int *visited = (int *)calloc(MAX_VALUE, sizeof(int));
    
    if (visited == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    int repeatedElement = -1;
    int found = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (!found) {
            if (visited[arr[i]] == 1) {
                repeatedElement = arr[i];
                found = 1;
            } else {
                visited[arr[i]] = 1;
            }
        }
    }

    if (found) {
        printf("The repeated element is: %d\n", repeatedElement);
    } else {
        printf("No repeated element found.\n");
    }

    free(visited);
    return 0;
}
