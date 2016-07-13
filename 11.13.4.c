#include <stdio.h>
#define LEN 80
char * myStrchr (char * str, char ch);
int main (void)
{
    char input[LEN];
    char *chk;
    char ch;
    gets (chk);
    rewind (stdin);
    ch = getchar ();
    printf ("%s", myStrchr (chk, ch));

    return 0;
}

#include <ctype.h>
#include <string.h>
char * myStrchr (char * str, char ch)
{
    int i = 0;
    char * ret;

    while (*str)
    {
        if (*str == ch)
        {
            ret = str;
            return ret;
        }
        else
        {
             str++;
        }
    }
    return NULL;
}
