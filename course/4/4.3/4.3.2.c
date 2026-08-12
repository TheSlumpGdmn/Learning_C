#include <stdio.h>

int main(void)
{
    int p = 1, n;
    int i = 1;

    scanf("%d", &n);

    // for(int i = 2;i <= n; ++i)
        // p *= i;

    do {
        p *= i;
        i++;
    } while (i <=n);
    
    printf("%d", p);

    return 0;
}