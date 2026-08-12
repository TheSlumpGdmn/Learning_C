#include <stdio.h>

int main(void) {
    int a;
    int b;
    int c1, c2, c3;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        c1 = i / 100;
        c2 = (i % 100) / 10;
        c3 = i % 10;
        if (c1 != c2 && c1 != c3 && c2 != c1 && c2 != c3) printf("%d ", i);
    }
    return 0;
}