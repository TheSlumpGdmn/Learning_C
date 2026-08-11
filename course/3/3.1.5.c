#include <stdio.h>
#include <stdbool.h>

int main(void) {
    double s;
    scanf("%lf", &s);
    bool res = (int)s % 5 == 0;
    printf("%d", res);
    return 0;
}