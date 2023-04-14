#include "main.h"

// unsigned long long main() {
//     unsigned long long a, b;
//     printf("Введите 2 числа для поиска наибольшего общего делителя по рекурсивному алгортму Евклиду: ");
//     scanf("%d%d", &a, &b);
//     unsigned long long gcd = gcd(a, b);
//     printf("НОД %d и %d это %d\n", a, b, gcd);
//     return 0;
// }

unsigned gcd(unsigned a, unsigned b) {
    if(a == 0) {
        return b;
    }
    return gcd(b % a, a);
} 

