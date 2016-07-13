#include <stdio.h>
void foo (char ch, int counts, int rows);
int main (void)
{
    char ch;
    int counts, rows;
    printf ("Please input a char: ");
    ch = getchar ();
    printf ("Please input 2 numbers: ");
    scanf ("%d%d", &counts, &rows);
    foo (ch, counts, rows);
    return 0;
}

void foo (char ch, int counts, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < counts; j++)
        {
            putchar (ch);
        }
        putchar ('\n');
    }
}
