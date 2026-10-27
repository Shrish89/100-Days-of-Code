#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("info.txt", "a");

    if (fp == NULL) {
        printf("File cannot be opened.");
        return 1;
    }

    printf("Enter a new line: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("Text appended successfully.");

    return 0;
}