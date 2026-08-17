// #include <stdio.h>
#define TOTAL   5

int main(void)
{
    // здесь продолжайте программу
    int ar_1[TOTAL];
    int ar_2[TOTAL * 2];

    for (int i = 0; i < TOTAL; i++) {
        scanf("%d", &ar_1[i]);
        ar_2[i] = ar_1[i];
    }

    for (int i = 5; i < TOTAL * 2; i++) {
        ar_2[i] = -1;
    }

    /*
    for (int i = 0; i < TOTAL; i++) {
        if (i > 0) printf(" ");
        printf("%d", ar_1[i]);
        if (i == TOTAL - 1) printf("\n");

    }
    */

    /*
    for (int i = 0; i < TOTAL * 2; i++) {
        if (i > 0) printf(" ");
        printf("%d", ar_2[i]);
        if (i == TOTAL * 2 - 1) printf("\n");
    }
    */



    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}