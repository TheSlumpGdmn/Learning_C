#include <stdio.h>

int main(void) {
    int a;
    int b;
    int h;
    scanf("%d, %d, %d", &a, &b, &h);
    double s = ((a + b) / 2.) * h;
    printf("%.1f", s);
    return 0;
}