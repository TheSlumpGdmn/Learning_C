#include <stdio.h>
#include <stdbool.h>

int main(void) {
    double x;
    double y;
    scanf("%lf %lf", &x, &y);
    bool res = (x > -5 && x < 10) && (y > 0 && y < 7);
    printf("%d", res);
    return 0;
}