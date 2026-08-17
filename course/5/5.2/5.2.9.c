/*Подвиг 9. В программе до функции main() объявлен массив с именем marks и типом элементов short. Этот массив скрыт в коде, но он существует. В функции main() вычислите среднее арифметическое значений элементов этого массива и выведите в консоль полученное значение с точностью до сотых.*/

#include <stdio.h>

int main(void)
{
    // здесь продолжайте функцию main

    short marks[] = {1, 2, 3, 4, 5};

    int s = 0;
    
    int size = sizeof(marks) / sizeof(*marks);
    // printf("размер массива = %d\n", size);

    for (int i = 0; i < size; i++) {
        s += marks[i];
    }

    // printf("Сумма всех элементов = %d\n", s);

    double res = (double)s / (double)size;
    printf("%.2f", res);

    return 0;
}