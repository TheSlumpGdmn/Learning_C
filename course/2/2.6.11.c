#include <stdio.h>

int main(void) {
    int a;
    int b;
    int h;
    double s;
    scanf("%d, %d, %d", &a, &b, &h);
    s = ((a + b) * h) / 2.;
    printf("%.1f", s);
    return 0;
}