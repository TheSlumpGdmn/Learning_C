/* Подвиг 3. Продолжите программу. Необходимо после первого найденного элемента со значением 5 массива digs вставить новое значение -5. Обратите внимание, что при вставке нового значения, последний элемент массива digs может теряться (если длина массива не позволяет хранить все значения). Также следует учитывать, что элемент со значением 5 может отсутствовать в массиве digs (тогда ничего вставлять не нужно). Выведите в консоль по порядку значения всех прочитанных + добавленных элементов массива digs в одну строчку через пробел. */

#include <stdio.h>

#define TOTAL     10

int main(void)
{
    int digs[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(digs) / sizeof(*digs);

    while(count < sz_ar && scanf("%d", &digs[count]) == 1)
        count++;

    // здесь продо лжайте программу
    
    
    int sign = -1;
    int flag = 1;

    for (int i = 0; i < (int)sz_ar && flag != 0; i++) {
        if (digs[i] == 5) {
            sign = i + 1;
            flag = 0;
        }
    }
    if (sign >= 0) {
        for (int i = (int)sz_ar - 2; i >= sign; i--) {
            digs[i + 1] = digs[i];
        }

        digs[sign] = -5;

        for (int i = 0; i <= (int)count && i < (int)sz_ar; i++) {
            if (i > 0) printf(" ");
            printf("%d", digs[i]);
        }
    }

    else {
        for (int i = 0; i < (int)count && i < (int)sz_ar; i++) {
            if (i > 0) printf(" ");
            printf("%d", digs[i]);
        }
    }

    return 0;
}