#include <stdio.h>

int main(void) {
    int c = '*';
    int d;
    scanf("%d", &d);
    for (int i = 1; i <= d; i++) {
        for (int j = 1; j <= d - i; j++)
            printf(" ");
        for (int k = 1; k <= (i * 2 - 1); k++)
            printf("%c", c);
        printf("\n");
    }
    return 0;
}