#include <stdio.h>
void copy_arr (double source[], double target1[], int num);
void copy_ptr (double *source, double *target1, int num);
void copy_arr2d (int m, int n, double source[m][n], double target[m][n]);
void show (int m, int n, double arr[m][n]);
int main (void)
{
    double source[3][5] = {{1.1, 2.2, 3.3, 4.4, 5.5}, {1.2, 2.3, 3.4, 4.5, 5.6}, {1.3, 2.4, 3.5, 4.6, 5.7}};
    double target[3][5];
    copy_arr2d(3, 5, source, target);
    show (3, 5, target);
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

void copy_arr2d (int m, int n, double source[m][n], double target[m][n])
{
     for (int i = 0; i < m; i++)
     {
         for (int j = 0; j < n; j++)
         {
             target[i][j] = source[i][j];
         }
     }
}

void show (int m, int n, double arr[m][n])
{
     for (int i = 0; i < m; i++)
     {
         for (int j = 0; j < n; j++)
         {
             printf ("%.1f ", arr[i][j]);
         }
         printf ("\n");
     }
}
