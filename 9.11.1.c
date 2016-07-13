#include <stdio.h>
double min (double x, double y);
int main (void)
{
    double x, y;
    printf ("Please input two numbers:");
    while (scanf ("%lf%lf", &x, &y) != 2) printf ("Please input two numbers:");
    printf ("min = %lf\n", min (x, y));
    return 0;
}

double min (double x, double y)
{
    return x < y ? x : y;
}
