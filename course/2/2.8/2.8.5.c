#include <stdio.h>

int main(void) {
    double w;
    double h;
    scanf("%lf %lf", &w, &h);
    printf("Периметр: %.1f", (w + h) * 2);
    return 0;
}