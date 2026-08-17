#include <stdio.h>

int main(void)
{
    // здесь продолжайте программу
    int digits[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &digits[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (i > 0) printf(" ");
        printf("%d", digits[i]);
    }

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}