#include <stdio.h>
void sumArr (int arr1[], int arr2[], int sum[], int n);
int main (void)
{
    int arr1[4] = {2, 4, 5, 8};
    int arr2[4] = {1, 0, 4, 6};
    int sum[4];
    sumArr (arr1, arr2, sum, 4);
    for (int i = 0; i < 4; i++)
    {
        printf ("%d\n", sum[i]);
    }
}

void sumArr (int arr1[], int arr2[], int sum[], int n)
{
    for (int i = 0; i < n; i++)
    {
        sum[i] = arr1[i] + arr2[i];
    }
}
