#include <stdio.h>

int main(void) {
    int s = 0;
    for (int i = 0; scanf("%d", &i) == 1 && i != 0;) {
        s = (s * 10) + i;
    }
    printf("%d", s);
    return 0;
}