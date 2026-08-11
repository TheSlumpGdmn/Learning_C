#include <stdio.h>

int main(void)
{
    unsigned short time_h = 10; // часы
    unsigned short time_m = 33; // минуты
    unsigned short time_s = 5; // секунды

    unsigned short h, m, s; // добавляемое время: h - часы; m - минуты; s - секунды
    scanf("%hu; %hu; %hu", &h, &m, &s);

    // здесь продолжайте программу
    int sum = time_h * 3600 + time_m * 60 + time_s + h * 3600 + m * 60 + s;
    int new_h = sum / 3600;
    int new_m = (sum % 3600) / 60;
    int new_s = (sum % 3600) % 60;

    printf("%02d:%02d:%02d", new_h, new_m, new_s);
    
    return 0;
}