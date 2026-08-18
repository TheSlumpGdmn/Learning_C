/* Подвиг 2. Продолжите программу. Необходимо в массиве buffer поменять местами первую половину прочитанных данных со второй половиной. Обратите внимание, что число прочитанных данных определяется переменной count. Причем, если count четное, то первая половина меняется со второй целиком, а если count нечетное, то центральный элемент должен оставаться на своем месте без изменений. Выведите в консоль в одну строчку через пробел первые count элементов полученного массива buffer.

P. S. Дополнительных массивов в программе не создавать. */

#include <stdio.h>

#define SIZE_BUFFER     128

int main(void)
{
    int buffer[SIZE_BUFFER] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(buffer) / sizeof(*buffer);

    while(count < sz_ar && scanf("%d", &buffer[count]) == 1)
        count++;

    // здесь продолжайте программу

    for (int i = 0; i < (int)count / 2; i++) {
        int t = *(buffer + i);
        if (count % 2 != 0) {
            *(buffer + i) = *(buffer + (int)count / 2 + 1 + i);
            *(buffer + (int)count / 2 + 1 + i) = t;
        }
        else if (count % 2 == 0) {
            *(buffer + i) = *(buffer + (int)count / 2 + i);
            *(buffer + (int)count / 2 + i) = t;
        }
    }

    for(int i = 0; i < (int)count; i++){
        if (i > 0 && i != (int)sz_ar - 1) printf(" ");
        printf("%d", *(buffer + i));
    }

    return 0;
}