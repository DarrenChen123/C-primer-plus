#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ANSWER "GRANT"
#define MAX 40
int main (void)
{
    char try[MAX];

    puts ("Who is buried in Grant's tomb?");
    gets (try);
    for (int i = 0; i < strlen(try); i++) try[i] = toupper (try[i]);
    while (strcmp (try, ANSWER) != 0)
    {
        puts ("No, that's wrong. Try again. ");
        gets (try);
    }
    puts ("That's right!");

    return 0;
}
