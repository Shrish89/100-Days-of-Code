#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input, *output;
    int ch;

    input = fopen("input.txt", "r");

    if (input == NULL) {
        printf("input.txt not found\n");
        return 1;
    }

    output = fopen("output.txt", "w");

    if (output == NULL) {
        printf("Cannot create output.txt\n");
        fclose(input);
        return 1;
    }

    while ((ch = fgetc(input)) != EOF) {
        fputc(toupper(ch), output);
    }

    fclose(input);
    fclose(output);

    printf("Done\n");

    return 0;
}