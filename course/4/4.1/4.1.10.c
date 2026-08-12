#include <stdio.h>

int main(void) {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    int min = (a < b) ? a : b;
    int max = (a > b) ? a : b;
    while (min > 0) {
        max %= min;
        int temp = max;
        max = min;
        min = temp;
    }
    printf("%d", max);
    return 0;
}