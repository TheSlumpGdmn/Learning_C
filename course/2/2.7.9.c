#include <stdio.h>

int main(void) {
    int h;
    int w;
    scanf("%d, %d", &h, &w);
    printf("%d", ++h * ++w);
    return 0;

}