#include <stdio.h>

int main(void) {
    int s = 0;
    int d;
    do {
        scanf("%d", &d);
        if (d > 0) s += d;
    } while (d != 13);
    printf("%d", s);
    return 0;
}