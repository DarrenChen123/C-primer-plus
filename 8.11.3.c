#include <stdio.h>
#include <ctype.h>

int main (void)
{
    int ch;
    int upperCount = 0;
    int lowerCount = 0;

    while ((ch = getchar ()) != EOF)
    {
        if (isupper(ch)) upperCount++;
        else if (islower(ch)) lowerCount++;
    }
    printf ("upper: %d, lower: %d.\n", upperCount, lowerCount);
}
