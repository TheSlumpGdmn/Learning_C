#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int i = 2;
    int d1 = 1;
    int d2 = 1;
    printf("%d %d ", d1, d2);
    while (i < n) {
        int d3 = d1 + d2;
        printf("%d ", d3);
        d1 = d2;
        d2 = d3;
        i++;
    }
    return 0;
}