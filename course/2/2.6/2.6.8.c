#include <stdio.h>

int main(void)
{
    int b1; // первый член прогрессии
    int q; // знаменатель прогрессии
    double s;
    scanf("%d, %d", &b1, &q);

    // здесь продолжайте программу
    s = ((q * q * q * q -1) * b1) / (q - 1);
    printf("%d", (int)s);
    
    return 0;
}