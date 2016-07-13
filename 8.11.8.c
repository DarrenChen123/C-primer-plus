#include <stdio.h>
#include <ctype.h>
float get_float(void);
void menu (void);
int getfirst (void);
int main (void)
{
    float first, second;
    char response;
    float answer;
    menu ();
    while ((response = getfirst ()) != 'q')
    {
        if (response == '\n') continue;
        response = tolower (response);
        switch(response)
    {
        case 'a':
            {
                printf ("Enter first number: ");
                first = get_float ();
                printf ("Enter second number: ");
                second = get_float ();
                printf ("%.1f + %.1f = %.1f\n", first, second, first + second);
                menu ();
                break;
            }
        case 's':
            {
                printf ("Enter first number: ");
                first = get_float ();
                printf ("Enter second number: ");
                second = get_float ();
                printf ("%.1f - %.1f = %.1f\n", first, second, first - second);
                menu ();
                break;
            }
        case 'm':
            {
                printf ("Enter first number: ");
                first = get_float ();
                printf ("Enter second number: ");
                second = get_float ();
                printf ("%.1f * %.1f = %.1f\n", first, second, first * second);
                menu ();
                break;
            }
        case 'd':
            {
                printf ("Enter first number: ");
                first = get_float ();
                printf ("Enter second number: ");
                while ((second = get_float ()) == 0)
                    printf ("Enter a number other than 0: ");
                printf ("%.1f / %.1f = %.1f\n", first, second, first / second);
                menu ();
                break;
            }
        default: printf ("Please enter a, s, m, d, or q.\n"); menu (); continue;
    }
    }
    printf ("Bye.\n");
    return 0;
}

void menu (void)
{
     printf ("****************************************************************\n");
     printf ("Enter the operation of your choice:\n");
     printf ("a. add                                      s. substract\n");
     printf ("m. multiply                                 d. divide\n");
     printf ("q. quit\n");
     printf ("****************************************************************\n");
}
float get_float(void)
{
     float input;
     char ch;
     while (scanf ("%f", &input) != 1)
     {
         while ((ch = getchar ()) != '\n')
             putchar(ch);
         printf (" is not a number.\nPlease enter a number,such as 2.5, -1.78E8, or 3: ");
     }
     return input;
}

int getfirst (void)
{
     int ch;

     ch = getchar ();
     while (isspace (ch))
         ch = getchar ();
     while (getchar () != '\n')
         continue;
     return ch;
}
