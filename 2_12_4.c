#include <stdio.h>
void good1();
void good2();

int main () {
 good1();
 good1();
 good1();
 good2(); 
 return 0;
}
void good1() {
 printf("For he's a jplly good fellow!\n");
}

void good2() {
 printf("Which nobody can deny!\n");
}

