#include <stdio.h>

int main(void)
{
    int a1; // первый член прогрессии
    int a50; // 50-й член прогрессии
    int s;
    scanf("%d, %d", &a1, &a50);
    
    // здесь продолжайте программу
    s = ((a1 + a50) / 2.) * 50;
    printf("%d", s);

    return 0;
}