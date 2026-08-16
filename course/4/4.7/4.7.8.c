#include <stdio.h>

int main(void) {
    int a;
    int b;
    int c;
    int d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    a = a - 0.5 * 2;
    b = b - 0.5 * 2;

    double s_c = a * b;

    double s_o = c * d;

    if ((s_c >= s_o) && (c <= a || c <= b) && (d <= a || d <= b)) printf("yes");
    else printf("no");


    return 0;
}