#include <stdio.h>

int main(void) {
    int d;
    char c = '*';
    scanf("%d", &d);
    for (int i = 0; i < d; i++) {
        if (i > 0) printf("\n");
        for (int j = 0; j < i + 1; j++) {
            printf("%c", c);
        }
    }
    return 0;

}