#include <stdio.h>

int main(void) {
    int mps;
    scanf("%d", &mps);
    double kph = (double)mps * 3600 / 1000;
    printf("%.1f", kph);
    return 0;
}