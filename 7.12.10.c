#include <stdio.h>
#define SINGLE 17850
#define HOST 23900
#define MARRIED_SHARE 29750
#define MARRIED_DIVORCE 14875
#define RATE1 0.15
#define RATE2 0.28

int main (void)
{
    double type, pay, tax;
    char ch;
    while (1)
    {
        printf ("Select the type of marriage:\n");
        printf ("1)SINGLE\n2)HOST\n3)MARRIED_SHARE\n4)MARRIED_DIVORCE\n5)quit\n");
        while ((ch = getchar ()) == '\n') continue;
        switch (ch)
        {
            case '1':type = SINGLE; break;
            case '2':type = HOST; break;
            case '3':type = MARRIED_SHARE; break;
            case '4':type = MARRIED_DIVORCE; break;
            case '5':printf ("quit\n"); return 0;
            default:printf ("input error\n");continue;
        }
        printf ("you have selected %c\n", ch);
        printf ("input the pay:");
        scanf ("%lf", &pay);
        if (pay <= type) tax = pay * RATE1;
        else tax = type * RATE1 + (pay - type) * RATE2;
        printf ("wax is %.2lf\n", tax);
    }
}
