#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0;
    int capitalize = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (capitalize && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalize = 0;
        } else if (!capitalize && isalpha(str[i])) {
            str[i] = tolower(str[i]);
        }

        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            capitalize = 1;
        }
        i++;
    }

    printf("Sentence case: %s", str);
    return 0;
}
