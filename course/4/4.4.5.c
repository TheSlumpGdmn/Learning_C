#include <stdio.h>

int main(void) {
    int n;
    // int d = 2;
    scanf("%d", &n);

    /*while (n > 1) {
        if (n % d != 0) {
            d++;
            continue;
        }
        n /= d;
        printf("%d ", d);
    }*/

    for (int d = 2; n > 1;) {
        if (n % d != 0) {
            d++;
            continue;
        }
        n /= d;
        printf("%d ", d);
    }

    return 0;
}