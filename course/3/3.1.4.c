#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int s;
    scanf("%d", &s);
    bool res = s % 5 == 0;
    printf("%d", res * 100);
    return 0;
}