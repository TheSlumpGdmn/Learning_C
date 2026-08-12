#include <stdio.h>

int main(void) {
    int d;
    int s = 1;
    
    while(scanf("%d", &d) == 1 && d != 0) {
        if (d < 0) continue;
        s *= d;
    }
    printf("%d", s);
    return 0;
}