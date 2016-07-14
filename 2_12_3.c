#include <stdio.h>
int main () {
  int year, day;
  printf("Please input your age:\n");
  scanf("%d",&year);
  day = 365 * year;
  printf("You've lived %d days.",day);
  return 0;
}
