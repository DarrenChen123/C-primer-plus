#include <stdio.h>
double avgr (double a, double b);
int main (void)
{
    double a, b;
    printf ("Please input two numbers: ");
    scanf ("%lf%lf", &a, &b);
    printf ("The result is %.2lf", avgr (a, b));
}

double avgr (double a, double b)
{
    return 1 / ((1 / a + 1 / b) / 2);
}
