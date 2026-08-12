#include <stdio.h>

int main(void) {
    double a;
    double b;
    double c;
    scanf("%lf, %lf, %lf", &a, &b, &c);
    if (a + b > c && a + c > b && c + b > a) printf("yes");
    else printf("no");
    return 0;
}