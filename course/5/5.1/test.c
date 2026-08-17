#include <stdio.h>

#define TOTAL 1024

int main(void) {
    int total;
    printf("Введите длину массива:\n");
    scanf("%d", &total);

    int buff[total];

    for (int i = 0; i < total; i++) {
        printf("Введите %d элемент массива:\n", i + 1);
        scanf("%d", &buff[i]);
    }

    printf("Массив buff = [");
    
    for (int i = 0; i < total; i++) {
        if (i > 0) printf(" ");
        printf("%d", buff[i]);
    }

    printf("]\n");

    return 0;
}