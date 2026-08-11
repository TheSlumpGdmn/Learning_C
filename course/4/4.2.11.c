#include <stdio.h>

int main(void) {
    int n;
    int s1;
    int s2;
    scanf("%d", &n);
    s1 = (n / 100000) + ((n % 100000) / 10000) + ((n % 10000) / 1000);
    s2 = ((n % 1000) / 100) + ((n % 100) / 10) + (n % 10);
    if (s1 == s2) printf("yes");
    else printf("no");
    return 0;
}