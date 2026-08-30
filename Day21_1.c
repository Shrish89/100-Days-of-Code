#include <stdio.h>

int main()
{
    int n, first, last, temp, digits = 0, power = 1, newNumber;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    last = n % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;

    newNumber = last * power;

    newNumber = newNumber + (n % power);

    newNumber = newNumber - last + first;

    printf("Number after swapping = %d", newNumber);

    return 0;
}