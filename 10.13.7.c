#include <stdio.h>
void copy_arr (double source[], double target1[], int num);
void copy_ptr (double *source, double *target1, int num);
int main (void)
{
    double source[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    double target2[3];
    copy_ptr (source + 2, target2, 3);
    for (int i = 0; i < 3; i++)
    {
        printf ("%.1f\n", target2[i]);
    }
}

void copy_arr (double source[], double target1[], int num)
{
    for (int i = 0; i < num; i++)
    {
        target1[i] = source[i];
    }
}

void copy_ptr (double *source, double *target1, int num)
{
    for (int i = 0; i < num; i++)
    {
         *(target1 + i) = * (source + i);
    }
}
