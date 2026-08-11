#include <stdio.h>

int main(void)
{
    short x, y;
    if(scanf("%hd, %hd", &x, &y) != 2) {
        printf("Input error.");
        return 0;
    }

    // здесь продолжайте программу
    if (x > y) printf("%d", y);
    else printf("%d", x);
    return 0;
}