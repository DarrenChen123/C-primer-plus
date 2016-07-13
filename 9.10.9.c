#include <stdio.h>
void showmenu (void);
int getchoice (int low, int high);
int main (void)
{
    int res;
    showmenu ();
    while ((res = getchoice (1, 4)) != 4)
        printf ("I like choice %d", res);
    printf ("Bye!\n");
    return 0;
}

void showmenu (void)
{
    printf ("Please choose one of the following:\n");
    printf ("1) copy files  2) move files\n");
    printf ("3) remove files 4) quit\n");
    printf ("Enter the number of your choice:");
}

int getchoice (int low, int high)
{
    int ans;
    scanf ("%d", &ans);
    while (ans < low || ans > high)
    {
         printf ("%d is not a valid choice;try again\n", ans);
         showmenu ();
         scanf ("%d", &ans);
    }
    return ans;
}
