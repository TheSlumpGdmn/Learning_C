#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a = 1;
    int b = 1000;
    int x;
    int m;
    scanf("%d", &x);
    do {
        m = a + rand() % (b - a + 1);
        if (m == x) printf("%d", m);
        else if (m < x) a = m;
        else if (m > x) b = m;
    } while (m != x);
    return 0;
}