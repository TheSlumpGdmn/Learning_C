#include <stdio.h>

int main(void) {
    int width;
    int height;
    scanf("%d %d", &width, &height);
    int border = ((width > height) ? width : height) + 8;
    printf("%d", border);
    return 0;
}