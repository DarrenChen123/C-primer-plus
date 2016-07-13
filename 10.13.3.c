#include <stdio.h>
#define NUM 5
int max(int arr[], int n);
int main (void)
{
    int arr[NUM] = {1, 2, 3, 4, 5};
    printf ("%d\n", max(arr, NUM));
    return 0;
}

int max (int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i]) max = arr[i];
    }
    return max;
}
