#include <stdio.h>
int main (void)
{
    int num;
    int oddCount = 0;
    int evenCount = 0;
    int oddSum = 0;
    int evenSum = 0;
    scanf("%d", &num);
    while (num != 0)
    {
        switch (num % 2) {
            case 0: evenCount++;
                    evenSum += num;
                    break;
            case 1: oddCount++;
                    oddSum += num;
                    break;
            default:break;
        }
        scanf ("%d", &num);
    }
    printf ("even: %d avr: %.2f\n", evenCount,(float) evenSum / evenCount);
    printf ("odd: %d avr: %.2f\n", oddCount, (float) oddSum / oddCount);
}
