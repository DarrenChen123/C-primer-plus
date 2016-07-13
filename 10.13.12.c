#include <stdio.h>
void read(int m, int n, double ret[m][n]);
double avg (int n, double arr[n]);
double totAvg (int m, int n , double arr[m][n]);
double max (int m, int n, double arr[m][n]);
void show (int m, int n, double arr[m][n]);
int main (void)
{
    double arr1[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double arr2[5] = {1.2, 2.3, 3.4, 4.5, 5.6};
    double arr3[5] = {1.3, 2.4, 3.5, 4.6, 5.7};
    double ret[3][5];
    read (3, 5, ret);
    for (int i = 0; i < 3; i++)
    {
        printf ("%.2f ", avg (5, ret[i]));
    }
    printf ("\n");
    printf ("%.2f\n", totAvg (3, 5, ret));
    printf ("%.1f\n", max (3, 5, ret));
    show (3, 5, ret);
    return 0;
}

void read (int m, int n, double ret[m][n])
{
     for (int i = 0; i < m; i++)
     {
         for (int j = 0; j < n; j++)
         {
             scanf ("%lf", &ret[i][j]);
         }
     }
}


double avg (int n, double arr[n])
{
     double tot = 0;
     for (int i = 0; i < n; i++)
     {
          tot += arr[i];
     }
     return tot / n;
}

double totAvg (int m, int n, double arr[m][n])
{
     double tot = 0;
     for (int i = 0; i < m; i++)
     {
         for (int j = 0; j < n; j++)
         {
             tot += arr[i][j];
         }
     }
     return tot / (m * n);
}

double max (int m, int n, double arr[m][n])
{
     double max = arr[0][0];
     for (int i = 0; i < m; i++)
     {
         for (int j = 0; j < n; j++)
         {
             if (max < arr[i][j]) max = arr[i][j];
         }
     }
     return max;
}

void show (int m, int n, double arr[m][n])
{
    for (int i = 0; i < m; i++)
    {
         for (int j = 0; j < n; j++) printf ("%.1f ", arr[i][j]);
         printf ("\n");
    }
}
