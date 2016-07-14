#include <stdio.h>
int main () {
  printf("?? inch\n");
  int lengthInch;
  scanf("%d", &lengthInch);
  int lengthCm;
  lengthCm = 2.54 * lengthInch;
  printf("%d cm",lengthCm);
}

