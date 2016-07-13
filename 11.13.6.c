#include <stdio.h>
#define LEN 80
char * myStrncpy (char * s1, char * s2, int n);
int main (void)
{
    char s1[LEN];
    char s2[LEN];
    int n;

    printf ("Enter 2 strings: ");
    while (gets (s1) && gets (s2) && s1[0] != '\0' && s2[0] != '\0')
    {
        scanf ("%d", &n);
        printf ("%s\n", myStrncpy (s1, s2, n));
        printf ("Next string: ");
    }
    puts ("Done.\n");

    return 0;
}

char * myStrncpy (char * s1, char * s2, int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (s1[i] && s2[i]) s1[i] = s2[i];
        else if (!s2[i]) s1[i] = '\0';
    }
     return s1;
}
