#include <stdio.h>

int main(void)
{
    int k, m;
    if(scanf("%d, %d", &k, &m) != 2) {
        printf("Input error.");
        return 0;
    }

    // здесь продолжайте программу
    int a = (k > m) ? m : k;
    printf("%d", a * a);
    return 0;
}