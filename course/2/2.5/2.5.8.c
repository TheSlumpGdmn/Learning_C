#include <stdio.h>

int main(void) {
    long int a;
    double b;
    double c;
    scanf("%ld\n%lf\n%lf", &a, &b, &c);
    printf("%ld %.2f %.2f", a, b, c);

    return 0;
}