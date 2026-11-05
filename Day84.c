#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status status;

    status = SUCCESS;

    if (status == SUCCESS)
        printf("Operation successful\n");
    else if (status == FAILURE)
        printf("Operation failed\n");
    else if (status == TIMEOUT)
        printf("Operation timed out\n");

    return 0;
}