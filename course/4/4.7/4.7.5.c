#include <stdio.h>

int main(void) {
    int value;
    scanf("%d", &value);
    printf("value = %d\n", value);

    short* ptr_sh = (short *)&value;

    int c = sizeof(int) / sizeof(short);

    for (int i = 0; i < c; i++) {
        (*ptr_sh)++;
        ptr_sh++;
    }

    printf("%d", value);

    return 0;
}