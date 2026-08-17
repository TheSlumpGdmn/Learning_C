/*Подвиг 8. Продолжите программу. Прочитайте из входного потока целые числа в переменные var_1, var_2 и var_3, записанные в одну строчку через запятую. Побайтно занесите их значения в массив типа char (в порядке var_1, var_2, var_3). Выведите в одну строчку через пробел по порядку значения массива в виде беззнаковых десятичных чисел.*/

#include <stdio.h>

int main(void)
{
    short var_1;
    int var_2;
    long long var_3;

    // здесь продолжайте программу
    scanf("%hd, %d, %lld", &var_1, &var_2, &var_3);

    int size_sh = sizeof(var_1);
    int size_int = sizeof(var_2);
    int size_ll = sizeof(var_3);

    unsigned char arr[size_sh + size_int + size_ll];

    unsigned char* ptr_1 = (unsigned char *)&var_1;
    unsigned char* ptr_2 = (unsigned char *)&var_2;
    unsigned char* ptr_3 = (unsigned char *)&var_3;

    unsigned char* ptr_arr = arr;

    for (int i = 0; i < size_sh; i++) {
        *(ptr_arr + i) = *(ptr_1 + i);
    }

    for (int i = 0; i < size_int; i++) {
        *(ptr_arr + size_sh + i) = *(ptr_2 + i);
    }

    for (int i = 0; i < size_ll; i++) {
        *(ptr_arr + size_sh + size_int + i) = *(ptr_3 + i);
    }

    for (int i = 0; i < (int)sizeof(arr) / (int)sizeof(*arr); i++) {
        printf("%u ", arr[i]);
    }

    return 0;
}