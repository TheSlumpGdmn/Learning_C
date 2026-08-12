#include <stdio.h>

int show_menu(void)
{
    char menu_item;

    printf("a) learning english\n\
b) learning C/C++\n\
c) learning mathematic\n\
d) learning Python\n");

    // здесь прописывайте функцию scanf() и оператор switch
    scanf("%c", &menu_item);

    switch(menu_item) {
        case 'a':
            return 1;
        case 'A':
            return 1;
        case 'b':
            return 2;
        case 'B':
            return 2;
        case 'c':
            return 3;
        case 'C':
            return 3;
        case 'd':
            return 4;
        case 'D':
            return 4;
    }
    return -1;
}

int main(void)
{
    int item = show_menu();

    // здесь выводите значение переменной item
    printf("%d", item);
    return 0;
}