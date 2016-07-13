#include <stdio.h>
unsigned long Fibonacci (unsigned int n);
int main (void)
{
    unsigned int n;
    printf ("Please enter a positive integer: ");
    while (scanf ("%u", &n) == 1)
    {
        printf ("Fibonacci (%u) = %lu\n", n, Fibonacci (n));
        printf ("Please enter a positive integer: ");
    }
    return 0;
}

unsigned long Fibonacci (unsigned int n)
{
    unsigned long n1 = 0, n2 = 0, ret = 0;
    unsigned int i = 0;
    if (n <= 2)
    {
        return 1;
    }
    else
    {
        n1 = 1;
        n2 = 1;
        for (i = 3; i <= n; i++)
        {
             ret = n1 + n2;
             n1 = n2;
             n2 = ret;
        }
        return ret;
    }
}
