#include <stdio.h>

int main(void){
    int s;
    int m;
    scanf("%d %d", &s, &m);
    double fs = (s - (s * m / 100.)) * 2.;
    printf("%.2f", fs);
    return 0;
}