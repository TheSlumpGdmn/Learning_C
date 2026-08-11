#include <stdio.h>

int is_palindrome(int a);

int main(void) {
    int m;
    int n;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++) {
        if (is_palindrome(i)) printf("%d ", i);
    }
    return 0;
}

int is_palindrome(int a) {
    int s = 0;
    int res = 0;
    int temp_a = a;
    while (temp_a > 0) {
        s = (s * 10) + (temp_a % 10);
        temp_a /= 10;
    }
    if (s == a) res = 1;
    else res = 0;

    return res;
}