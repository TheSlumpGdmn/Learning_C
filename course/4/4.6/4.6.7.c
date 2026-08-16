#include <stdio.h>

int main(void)
{
    // здесь продолжайте программу
    int* global_ptr;
    if (global_ptr != NULL) {
        *global_ptr = 10;
    }
    return 0;
}