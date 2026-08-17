#include <stdio.h>

int main(void)
{
    int ar[100];
    int * const ptr_ar = ar;

    // здесь продолжайте программу
    for (int i = 0; scanf("%d", (ptr_ar + i)) != 1 || *(ptr_ar + i) != 78; i++) {
        printf("%d ", ar[i]);
    }

    return 0;
}