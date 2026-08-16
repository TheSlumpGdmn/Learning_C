#include <stdio.h>

int main(void) {
    int count;
    scanf("%d", &count);

    char* ptr = (char *)&count;

    for (int i = 0; i < (int)sizeof(count); i++) {
        *ptr |= (1 << 0);
        *ptr |= (1 << 3);
        ptr++;
    }
    printf("%d", count);

    return 0;
}