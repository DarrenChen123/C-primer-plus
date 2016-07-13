#include <stdio.h>
int main (void)
{
    int count = 0;
    char ch;
    while ((ch = getchar ()) != '#')
    {
        if (ch == '.')
        {
            printf ("!");
            count++;
        }
        else if (ch == '!')
        {
            printf ("!!");
            count++;
        }
        else
        {
             printf ("%c", ch);
        }
    }
    printf ("\ncount = %d\n", count);
}
