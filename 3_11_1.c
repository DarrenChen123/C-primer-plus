#include <stdio.h>
int main () {
  int i = 2147483647;
  unsigned int j = 4294967295;
  printf ("%d + 1 = %d\n", i, i + 1);
  printf ("%u + 1 = %u\n", j, j + 1);
  float k = 3.4E38 * 100.0f;
  printf ("%e\n", k);
  float l = 0.1234E-10 / 10;
  printf ("%e\n",l);
  return 0;
}
