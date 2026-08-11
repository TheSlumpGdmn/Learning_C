#include <stdio.h>

int main(void)
{
    int rect_width = 1280, rect_height = 720;
    int w = 8, h = 8;
    scanf("%d; %d", &w, &h);

    // здесь продолжайте программу
    int ost_w;
    int ost_h;
    ost_w = rect_width % w;
    ost_h = rect_height % h;
    printf("%d %d", ost_w, ost_h);

    return 0;
}