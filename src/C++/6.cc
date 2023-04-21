#include "main.h"


// Функция возведения в степень с помощью операции умножения
long long power(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp = exp / 2;
    }
    return result;
}

// Функция теста Миллера на простоту
bool miller_rabin_test(long long n, int k) {

    // Обрабатываем угловые случаи
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    // Находим значения d и r
    long long d = n - 1;
    int r = 0;
    while (d % 2 == 0) {
        d /= 2; r++;
    }
    // Производим k итераций
    for (int i = 0; i < k; i++) {
        // Генерируем случайное a в диапазоне [2, n-2] 
        long long a = 2 + rand() % (n - 3);
        // Вычисляем x = a^d mod n
        long long x = power(a, d, n);
        if (x == 1 || x == n-1) 
            continue;
        bool is_composite = true;
        for (int j = 1; j < r; j++) {
            x = (x * x) % n;
            if (x == n-1) {
                is_composite = false;
                break;
            }
        }
        if (is_composite)
            return false; 
    }
    return true;
}

// int main() {
//     // Тестируем несколько чисел на простоту
//     long long nums[] = {1234567891011, 9876543210123, 111111111111111, 12345678910111213, 2147483647};
//     int k = 10;
//     for (long long num : nums) {
//         bool is_prime = miller_rabin_test(num, k);
//         std::cout << "Number " << num << " is " << (is_prime ? "prime." : "composite.") << "\n";
//     }
// }