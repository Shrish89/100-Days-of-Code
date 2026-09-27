#include <stdio.h>

int main()
{
    int day, month, year;

    printf("Enter date in dd/04/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (month == 4)
    {
        printf("Date in new format: %02d-Apr-%d\n", day, year);
    }
    else
    {
        printf("Invalid month. Please enter 04.\n");
    }

    return 0;
}