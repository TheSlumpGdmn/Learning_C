/* Подвиг 1. Продолжите программу. Необходимо из массива ar в обратном порядке (идя от последнего записанного значения к первому) скопировать прочитанные данные в массив marks (копирование выполнять от первого элемента к последнему), не выходя за пределы массива marks. То есть, в случае достижения последнего элемента массива marks, останавливать процедуру копирования. Вывести в консоль значения массива marks (от первого до последнего скопированного элемента) в одну строчку через пробел.*/

#include <stdio.h>

int main(void)
{
    short ar[10];
    short marks[5];
    size_t count = 0;
    size_t sz_ar = sizeof(ar) / sizeof(*ar);

    while(count < sz_ar && scanf("%hd", &ar[count]) == 1)
        count++;

    // здесь продолжайте программу
    size_t sz_mrks = (int)sizeof(marks) / (int)sizeof(*marks);

    for (int i = 0; i < (int)sz_mrks && i < (int)count; i++) {
        *(marks + i) = *(ar + count - 1 - i);
        if (i > 0 && (i != (int)sz_mrks || i != (int)count)) printf(" ");
        printf("%d", *(marks + i));
    }
    return 0;
}