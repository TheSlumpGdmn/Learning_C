#include <stdio.h>
#include <stdbool.h>

int main(void) {
    double s;
    scanf("%lf", &s);
    bool res = s >= -5.45 && s <= 10.37;
    printf("%d", res);
    return 0;
}