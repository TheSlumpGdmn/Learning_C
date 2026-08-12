#include <stdio.h>

int main(void) {
    int x;
    double s = 0;
    int i = 1;
    scanf("%d", &x);
    while (i <= x) {
        s += (1. / (i * i));
        i++;
    }
    printf("%.3f", s);
    return 0;
}