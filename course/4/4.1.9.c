#include <stdio.h>

int main(void) {
    int d;
    scanf("%d", &d);
    int temp_d = d;
    int s = 0;
    while (temp_d > 0) {
        s = (s * 10) + (temp_d % 10);
        temp_d /= 10;
    }
    if (s == d) printf("yes");
    else printf("no");
    return 0;
}