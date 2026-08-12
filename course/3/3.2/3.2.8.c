#include <stdio.h>

int main(void) {
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);
    int d = b * b - 4 * a * c;
    if (d >= 0) printf("real roots exist");
    else printf("%d", d);
    return 0;
}