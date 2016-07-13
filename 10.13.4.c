#include <stdio.h>
#define NUM 5
int maxIndex (double arr[], int n);
int main (void)
{
    double arr[NUM] = {1.1, 2.2, 3.3, 4.4, 5.5};
    printf ("%d\n", maxIndex (arr, NUM));
}

int maxIndex (double arr[], int n)
{
    double max = arr[0];
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
             max = arr[i];
             index = i;
        }
    }
    return index;
}
