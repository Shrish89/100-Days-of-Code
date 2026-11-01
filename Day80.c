#include <stdio.h>

int main() {
    FILE *fp;
    int n, i, roll;
    char name[50];
    float marks;

    fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("File cannot be opened");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter name: ");
        scanf("%s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    if (fp == NULL) {
        printf("File cannot be opened");
        return 1;
    }

    printf("\nStudent Records:\n");

    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3) {
        printf("\nName: %s", name);
        printf("\nRoll Number: %d", roll);
        printf("\nMarks: %.2f\n", marks);
    }

    fclose(fp);

    return 0;
}