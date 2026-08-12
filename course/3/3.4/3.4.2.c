#include <stdio.h> 

int main(void) {
    char symbol;
    scanf("%c", &symbol);
    switch(symbol) {
        case 'a':
            symbol = 'A';
            break;
        case 'b':
            symbol = 'B';
            break;
        case 'c':
            symbol = 'C';
            break;
        case 'd':
            symbol = 'D';
            break;
        case 'e':
            symbol = 'E';
            break;
        case 'f':
            symbol = 'F';
            break;
    }
    printf("%c", symbol);
    return 0;
}