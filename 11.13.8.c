#include <stdio.h>
#define LEN 20
void strcov (char * s);
int main (void)
{
    char orig[LEN] = "transportation";

    puts (orig);
    strcov (orig);
    puts (orig);


    return 0;
}

#include <string.h>
void strcov (char * s)
{
     int l = strlen (s);
     char ret[l];

     for (int i = 0; i < l; i++)
     {
         ret[i] = s[l - 1 - i];
     }
     strcpy (s, ret);
}
