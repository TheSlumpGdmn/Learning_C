#include <stdio.h>

int main(void)
{
    // здесь продолжайте программу
    int a;
    int b;
    double c;
    double d;
    scanf("%d, %d, %*f, %lf", &a, &b, &d);
    printf("%d %d %.2f", a, b, d);

    return 0;
}