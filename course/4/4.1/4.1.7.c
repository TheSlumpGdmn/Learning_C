#include <stdio.h>

int main(void) {
    int n;
    int m;
    scanf("%d %d", &n, &m);
    int i = n;
    while (i >= n && i <= m) {
        if (i % 3 == 0) printf("%d ", i);
        i++;
    }
    return 0;
}