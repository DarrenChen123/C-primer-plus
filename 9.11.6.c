#include <stdio.h>
#include <ctype.h>
int position (char ch);
int main (void)
{
    char ch;
    while ((ch = getchar ()) != EOF)
    {
        if (position (ch) != -1) printf ("%c %d\n", ch, position (ch));
    }
}

int position (char ch)
{
    if (isalpha (ch))
    {
        ch = tolower (ch);
        return ch - 'a' + 1;
    }
    else return -1;
}
