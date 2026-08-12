#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    int flag = 1;
    scanf("%d", &n);
    double sqrt_n = sqrt(n);
    for (int i = 1; i <= sqrt_n; i++){
        if (n % i == 0 && (i != 1 && i != n)) flag = 0;
    }
    if (n == 1) flag = 0;
    if (flag) printf("yes");
    else printf("no");

    return 0;
}