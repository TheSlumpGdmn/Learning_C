#include <stdio.h>

int main(void) {
    double temp[10];
    for (int i = 0; i < 10; i++) {
        scanf("%lf;", &temp[i]);
    }
    for (int i = 5; i < 10; i++) {
        printf("%.1f", temp[i]);
        if (i > 1) printf(" ");
    }

    return 0;
}
