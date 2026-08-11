#include <stdio.h>

int main(void) {
    int x;
    scanf("%d", &x);
    printf("%d", (x > 0) ? x : 0);
    return 0;
}