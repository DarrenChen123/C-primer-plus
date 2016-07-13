#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main (void)
{
    int ch;
    bool isInWord;
    int alphaCount = 0;
    int wordCount = 0;
    float avg;
    while ((ch = getchar ()) != EOF)
    {
        if (!(isspace(ch)) && (!(ispunct(ch))))
        {
            alphaCount++;
            isInWord = true;
        }
        else if ((isspace(ch) || (ispunct(ch))) && isInWord)
        {
             wordCount++;
             isInWord = false;
        }
    }
    avg = (float)alphaCount / wordCount;
    printf ("%.2f", avg);
}
