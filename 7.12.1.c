#include <stdio.h>
int main (void)
{
    char ch;
    int spaceCount = 0;
    int returnCount = 0;
    int otherCount = 0;
    while ((ch = getchar ()) != '#')
    {
        switch (ch)
        {
            case ' ':spaceCount++; break;
            case '\n':returnCount++; break;
            default:otherCount++;
        }
    }
    printf ("space = %d, return = %d, other = %d.\n", spaceCount, returnCount, otherCount);
}
