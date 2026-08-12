#include <stdio.h>

int main(void) {
    int d;
    int err = 0;
    if (scanf("%d", &d) != 1 || d < 1 || d > 7) err = 1;
    if (!err) {
        if (d == 1) printf("понедельник");
        else if (d == 2) printf("вторник");
        else if (d == 3) printf("среда");
        else if (d == 4) printf("четверг");
        else if (d == 5) printf("пятница");
        else if (d == 6) printf("суббота");
        else if (d == 7) printf("воскресенье");
    }
    else printf("неверный номер дня недели");
    return 0;
}