#include <stdio.h>

int main(void) {
    int n;
    int i = 1;
    double s = 0;
    scanf("%d", &n);
    do {
        s = s + (1. / i);
        i++;
    } while (i <= n);
    printf("%.2f", s);
    return 0;
}