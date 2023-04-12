#include "main.h"

// int main() {
//     int a, b;
//     printf("Введите 2 числа для поиска наибольшего общего делителя по рекурсивному алгортму Евклиду: ");
//     scanf("%d%d", &a, &b);
//     int gcd = gcd(a, b);
//     printf("НОД %d и %d это %d\n", a, b, gcd);
//     return 0;
// }

unsigned gcd(unsigned a, unsigned b) {
    if( a != 0 && b != 0) {
        gcd(b, a % b);
    }
    else {
        if (a > b) {return a;}
        else {return b;}
    }
}

