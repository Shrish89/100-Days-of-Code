#include <stdio.h>

enum Days {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {
    enum Days day;
    char *names[] = {
        "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY"
    };

    for (day = MONDAY; day <= SUNDAY; day++) {
        printf("%s = %d\n", names[day], day);
    }

    return 0;
}