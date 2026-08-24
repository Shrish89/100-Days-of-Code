#include <stdio.h>

int main()
{
    float principal, rate, time;
    float simpleInterest, compoundInterest, amount;
    int i;

    printf("Enter principal: ");
    scanf("%f", &principal);

    printf("Enter rate: ");
    scanf("%f", &rate);

    printf("Enter time: ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    amount = principal;

    for (i = 1; i <= time; i++)
    {
        amount = amount + (amount * rate) / 100;
    }

    compoundInterest = amount - principal;

    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}