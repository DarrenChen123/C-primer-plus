#include <stdio.h>
#define NUM 5
double maxGap (double arr[], int n);
int main (void)
{
    double arr[NUM] = {1.1, 2.2, 3.3, 4.4, 5.5};
    printf ("%.1f\n", maxGap (arr, NUM));
}

double maxGap (double arr[], int n)
{
    double max = arr[0];
    double min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
             max = arr[i];
        }
        if (min > arr[i])
        {
             min = arr[i];
        }
    }
    return max - min;
}
