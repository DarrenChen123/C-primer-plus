#include <stdio.h>

int main(int argc, const char * argv[]) {
    char ch;
    scanf("%c", &ch);
    int num = ch - 'A' + 1;
    for (int i = 1; i <= num; i++) {
//        for (int j = num - i; j > 0; j--) {
//            printf("*");
//        }
        for (int j = 0; j < num * 2 - 1; j++) {
            printf("*");
            for (int k = 0; k < num * 2 - 1 - j; k++) {
              printf("\b");
            }
        }
        for (int j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        for (int j = 1; j <= i - 1; j++) {
            printf("%c", ch - num + i - j);
        }
        
        printf("\n");
    }
    return 0;
}

