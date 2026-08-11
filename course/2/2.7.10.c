#include <stdio.h>

int main(void)
{
    int rect_width = 640, rect_height = 480;
    int w = 1, h = 1;
    scanf("%d; %d", &w, &h);

    // здесь продолжайте программу
    int t_h = rect_height / h;
    int t_w = rect_width / w;
    int t_s = t_h * t_w;

    printf("%d", t_s);
    return 0;
}