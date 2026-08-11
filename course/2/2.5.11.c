#include <stdio.h>

int main(void) {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    int temp = a;
    a = b;
    b = temp;
    printf("%d %d", a, b);

    return 0;
}