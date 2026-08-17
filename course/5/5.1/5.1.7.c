#include <stdio.h>

int main(void)
{
    // здесь продолжайте программу
    double func[28];
    double x;
    scanf("%lf", &x);

    func[6] = x;
    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}