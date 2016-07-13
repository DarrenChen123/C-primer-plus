#include <stdio.h>
void larger_of (double *x, double *y);
int main (void)
{
    double x, y;
    printf ("Please input 2 numbers: ");
    scanf ("%lf%lf", &x, &y);
    larger_of (&x, &y);
    printf ("Now x = %.2lf, y = %.2lf\n", x, y);
}

void larger_of (double *x, double *y)
{
    if (*x > *y) *y = *x;
    else *x = *y;
}
