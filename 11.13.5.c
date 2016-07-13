#include <stdio.h>
#define LEN 80
int is_within (const char * str, char c);
int main (void)
{
    char input[LEN];
    char ch;
    int found;

    printf ("Enter a string: ");
    while (gets (input) && input[0] != '\0')
    {
        printf ("Enter a character: ");
        ch = getchar ();
        while (getchar () != '\n')
            continue;
        found = is_within (input, ch);
        if (found == 0)
            printf ("%c not found in string.\n", ch);
        else
            printf ("%c found in string %s\n", ch, input);
        printf ("Next string: ");
    }
    puts ("Done.\n");

    return 0;
}

int is_within (const char * str, char ch)
{
     while (*str != ch && *str != '\0')
         str++;
     return *str;
}
