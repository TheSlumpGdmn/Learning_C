#include <stdio.h>

int main(void) {
    int count;
    scanf("%d", &count);

    char* ptr = (char *)&count;


    for (int i = 0; i < (int)sizeof(count); i++) {
        *ptr &= ~(1 << 7);
        *ptr &= ~(1 << 6);
        *ptr &= ~(1 << 1);
        ptr++;
    }

    printf("%d", count);

    return 0;
}