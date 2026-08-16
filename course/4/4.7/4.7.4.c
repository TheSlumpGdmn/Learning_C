#include <stdio.h>

int main(void)
{
    double value;

    scanf("%lf", &value);

    // здесь продолжайте программу
    char* ptr = (char *)&value;
    // int a = sizeof(double);
    // printf("%d\n", a);
    for (int i = 0; i < (int)sizeof(double); i++) {
        printf("%d ", *ptr++);
    }
    return 0;
}