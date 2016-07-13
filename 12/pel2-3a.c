#include <stdio.h>

void get_info (int mode, int * distance, double * fuel) {
    switch (mode)
    {
        case 0:
            {
                printf ("Enter distance traveled in kilometers: ");
                scanf ("%d", distance);
                printf ("Enter fuel consumed in liters: ");
                scanf ("%lf", fuel);
                break;
            }
        case 1:
            {
                printf ("Enter distance traveled in miles: ");
                scanf ("%d", distance);
                printf ("Enter fuel consumed in gallon: ");
                scanf ("%lf", fuel);
                break;
            }
        case -1:
            {
                printf ("Done.\n");
                return;
            }
        default:
            {
                 if (mode < 0)
                 {
                    printf ("Invalid mode specified. Mode 0 (metric) used.\n");
                    mode = 0;
                    printf ("Enter distance traveled in kilometers: ");
                    scanf ("%d", distance);
                    printf ("Enter fuel consumed in liters: ");
                    scanf ("%lf", fuel);
                 }
                 else if (mode > 1)
                 {
                    printf ("Invalid mode specified. Mode 1 (US) used.\n");
                    mode = 1;
                    printf ("Enter distance traveled in miles: ");
                    scanf ("%d", distance);
                    printf ("Enter fuel consumed in gallon: ");
                    scanf ("%lf", fuel);
                 }
                 break;
            }
    }
}

void show_info (int mode, int distance, double fuel)
{
     switch (mode)
     {
         case 0:
             {
                  printf ("Fuel consumption is %.2f liters per 100km.\n", (double)fuel / distance * 100);
                  break;
             }
         case 1:
             {
                  printf ("Fuel consumption is %.2f mils per gallon.\n", (double)distance / fuel);
                  break;
             }
         default:
             break;
}}
