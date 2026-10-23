#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int age;

    file = fopen("info.txt", "w");

    if (file == NULL) {
        printf("Error opening file");
        return 1;
    }

    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Age: %d\n", age);

    fclose(file);

    printf("Data successfully saved to info.txt");

    return 0;
}