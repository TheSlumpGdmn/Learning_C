#include <stdio.h>

int main(void) {
    unsigned int a;
    scanf("%d", &a);
    double r;
    r = 1.732 * a / 6;
    printf("%.3f", r);
    return 0;
}