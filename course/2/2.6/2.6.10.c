#include <stdio.h>

int main(void) {
    double r;
    scanf("%lf", &r);
    double length;
    length = 2 * 3.1415 * r;
    printf("%.3f", length);

    return 0;
}