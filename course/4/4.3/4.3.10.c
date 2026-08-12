#include <stdio.h>

int main(void) {
    double s = 0.0;
    int m;
    int n;
    int k;
    scanf("%d %d %d", &m, &n, &k);

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            for (int t = 1; t <= k; t++) {
                s += (1. / (n + m + k)) * (((double)j * (double)j) / (((double)i + (double)t) * ((double)i + (double)t) * ((double)i + (double)t) - (double)t));
            }
        }
    }
    printf("%.4f", s);
    return 0;
}