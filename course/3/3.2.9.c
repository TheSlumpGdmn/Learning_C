#include <stdio.h>

int main(void) {
    double a;
    double b;
    double c;
    scanf("%lf, %lf, %lf", &a, &b, &c);
    double min = a;
    if (min >= b) min = b;
    if (min >= c) min = c;
    printf("%.2f", min);
    return 0;
}