#include <stdio.h>

int main(void) {
    char s = '=';
    int c;
    scanf("%d", &c);
    for (int i = 0; i < c; i++) {
        printf("%c", s);
    }
    return 0;
}