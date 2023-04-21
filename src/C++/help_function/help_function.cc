#include "help_function.h"

int find_coprime(int a) {
    for (int i = 2; i < a; i++) {
        if (gcd(i, a) == 1) {
            return i;
        }
    }
    return -1; // возвращаем -1 если такое число не найдено
}

int find_inverse(int a, int m) {
    int x = 0, y = 0;
    int gcd = gcdExtended(a, m, &x, &y);
    if (gcd != 1) {
        std::cout << "Inverse doesn't exist" << std::endl;
        return -1;
    } else {
        return (x % m + m) % m;
    }
}

int pow_mod_10(int num, int pow) {
    num %= 10;
    int result = 1;
    for (int i = 0; i < pow; i++) {
        result *= num;
        result %= 10;
    }
}