#include <stdio.h>
#include <ctype.h>

#define BASEPAY1 8.75
#define BASEPAY2 9.33
#define BASEPAY3 10.00
#define BASEPAY4 11.20
#define BASEHRS 40
#define OVERTIME 1.5
#define AMT1 300
#define RATE1 0.15
#define AMT2 150
#define RATE2 0.20
#define RATE3 0.25
int getfirst(void);
void menu (void);
int main (void)
{
    double hours, gross, net, taxes, pay;
    char response;
    menu ();
    while ((response = getfirst ()) != 'q')
    {
        if (response == '\n') continue;
        response = tolower (response);
        switch(response)
    {
        case 'a':pay = BASEPAY1; break;
        case 'b':pay = BASEPAY2; break;
        case 'c':pay = BASEPAY3; break;
        case 'd':pay = BASEPAY4; break;
        default: printf ("Please enter a, b, c, d, or q.\n"); menu (); continue;
    }
    printf ("input the work hours of a week:");
    scanf ("%lf", &hours);
    if (hours <= BASEHRS)  gross = hours * pay;
    else gross = BASEHRS * pay + (hours - BASEHRS) * pay * OVERTIME;
    if (gross <= AMT1) taxes = gross * RATE1;
    else if (gross <= AMT1 + AMT2) taxes = AMT1 * RATE1 + (gross - AMT1) * RATE2;
    else taxes = AMT1 * RATE1 + AMT2 * RATE2 + (gross - AMT1 - AMT2) * RATE3;
    net = gross - taxes;
    printf ("gross: $%.2f; taxes: $%.2f; net: $%.2f\n", gross, taxes, net);
    menu ();
    }
    printf ("Done.\n");
    return 0;
}

void menu (void)
{
     printf ("****************************************************************\n");
     printf ("Enter the number corresponding to the desird pay rate or action:\n");
     printf ("a) $%4.2f/hr                                      b) $%4.2f/hr\n", BASEPAY1, BASEPAY2);
     printf ("c) $%5.2f/hr                                      d) $%5.2f/hr\n", BASEPAY3, BASEPAY4);
     printf ("q) quit\n");
     printf ("****************************************************************\n");
}
int getfirst(void)
{
     int ch;
     ch = getchar();
     while (isspace(ch))
     {
         ch = getchar ();
     }
     while (getchar () != '\n');
     return ch;
}
