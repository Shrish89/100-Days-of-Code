#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceName[100], destinationName[100];
    int ch;

    printf("Enter source file name: ");
    scanf("%s", sourceName);

    printf("Enter destination file name: ");
    scanf("%s", destinationName);

    source = fopen(sourceName, "r");
    destination = fopen(destinationName, "w");

    if (source == NULL || destination == NULL) {
        printf("Error opening file");
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully");

    return 0;
}