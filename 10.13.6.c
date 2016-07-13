#include <stdio.h>
void copy_arr (double source[], double target1[], int num);
void copy_ptr (double *source, double *target1, int num);
int main (void)
{
    double source[3][5] = {{1.1, 2.2, 3.3, 4.4, 5.5}, {1.2, 2.3, 3.4, 4.5, 5.6}, {1.3, 2.4, 3.5, 4.6, 5.7}};
    double target1[3][5];
    double target2[3][5];
    for (int i = 0; i < 3; i++)
    {
        copy_arr (source[i], target1[i], 5);
        copy_ptr (source[i], target2[i], 5);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
        printf ("%.1f,", target1[i][j]);
        printf ("%.1f ", target2[i][j]);
        }
        printf ("\n");
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
