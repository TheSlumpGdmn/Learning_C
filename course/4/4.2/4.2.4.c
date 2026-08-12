#include <stdio.h>

int main(void)
{
    int b1, q, n;
    scanf("%d; %d; %d", &b1, &q, &n);

    // здесь продолжайте программу
    printf("%d ", b1);
    for (int i = 2; i <= n; i++) {
        b1 *= q;
        printf("%d ", b1);
    }
    return 0;
}