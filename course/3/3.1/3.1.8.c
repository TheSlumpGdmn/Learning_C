#include <stdio.h>
#include <stdbool.h>

int main(void) {
    double s;
    scanf("%lf", &s);
    bool res = (s >= -10 && s < 0) || (s > 5 && s <= 12);
    printf("%d", res);
    return 0;
}