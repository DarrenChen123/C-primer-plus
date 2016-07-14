#include <stdio.h>
int main () {
  int years;
  long seconds;
  scanf ("%d", &years);
  seconds = years * 3.156E7;
  printf ("%ld seconds", seconds);
  return 0;
}
