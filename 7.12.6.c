#include <stdio.h>
int main (void)
{
    char ch;
    char prevCh = 0;
    int count = 0;
    while ((ch = getchar ()) != '#')
    {
        if (ch == 'i' && prevCh == 'e')
            count++;
        prevCh = ch;
    }
    printf ("count = %d\n", count);
}
