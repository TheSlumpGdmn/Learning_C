#include <stdio.h>

int main(void) {
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);
    (a + b > c && a + c > b && b + c > a) ? printf("yes") : printf("no");
    return 0;
}