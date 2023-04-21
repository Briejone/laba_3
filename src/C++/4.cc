#include "main.h"

// int main() {
//     int a, b, x, y;
//     printf("Введите 2 числа для поиска наибольшего общего делителя по рекурсивному алгортму Евклиду: ");
//     scanf("%d%d", &a, &b);
//     int gcd = gcdExtended(a, b, &x, &y);
//     printf("НОД %d и %d это %d\n", a, b, gcd);
//     printf("Коэфициент x и y это %d и %d", x, y);
//     return 0;
// }

int gcdExtended(int a, int b, int *x, int *y) {
    if (a == 0) {
        *x = 0;
        *y = 1;
        return b;
    }

    int x1, y1;
    int gcd = gcdExtended(b % a, a, &x1, &y1);

    *x = y1 - (b / a) * x1;
    *y = x1;

    return gcd;
}