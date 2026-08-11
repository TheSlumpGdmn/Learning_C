#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int rect_width = 640, rect_height = 480;
    int w = 1, h = 1;
    scanf("%d; %d", &w, &h);

    // здесь продолжайте программу
    bool if_w = (rect_width % w);
    bool if_h = (rect_height % h);
    bool if_x = ((rect_height % h) && (rect_width % w));

    int h_c = (rect_height) / h;
    int w_c = (rect_width) / w;
    
    int res = (h_c * if_w) + (w_c * if_h) + if_x;
    printf("%d", res);

    return 0;
}