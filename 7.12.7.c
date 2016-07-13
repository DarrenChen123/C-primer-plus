#include <stdio.h>
#define BASE 10.00
#define OVER 1.5 * BASE
#define BREAK1 300
#define BREAK2 150
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25
int main (void)
{
    int hours;
    float salary;
    float tax;
    float rest;
    scanf ("%d", &hours);
    if (hours <= 40) {
         salary = BASE * hours;
    } else {
         salary = BASE * 40 + OVER * (hours - 40);
    }
    if (salary < BREAK1) {
         tax = RATE1 * salary;
    } else if (salary < BREAK1 + BREAK2) {
         tax = RATE1 * BREAK1 + RATE2 * (salary - BREAK1);
    } else {
         tax = RATE1 * BREAK1 + RATE2 * BREAK2 + RATE3 * (salary - BREAK1 - BREAK2);
    }
    rest = salary - tax;
    printf ("salary = %.2f, tax = %.2f, rest = %.2f\n", salary, tax, rest);
}
