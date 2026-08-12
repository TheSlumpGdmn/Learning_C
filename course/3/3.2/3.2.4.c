#include <stdio.h>

int main(void) {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    if (a == b) printf("%d", a);
    else {
        int min = a;
        int max = b;
        if (a > b) {
            min = b;
            max = a;
        }
        printf("%d %d", min, max);
    }
    return 0;
}