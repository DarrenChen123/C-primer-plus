#include <stdio.h>
void copy_arr (double source[], double target1[], int num);
void copy_ptr (double *source, double *target1, int num);
int main (void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    copy_arr (source, target1, 5);
    copy_ptr (source, target2, 5);
    for (int i = 0; i < 5; i++)
    {
        printf ("%.1f ", target1[i]);
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
