#include "main.h"

/*

Шаги алгоритма RSA:

1. Выбрать два простых числа p и q.
2. Вычислить их произведение n = p * q.
3. Вычислить функцию Эйлера f(n) = (p - 1) * (q - 1).                       (2.cc)

4. Выбрать целое число e, взаимно простое с f(n), такое что 1 < e < f(n).
5. Вычислить число d, которое является обратным к e по модулю f(n).
6. Открытый ключ - пара (e, n), закрытый ключ - число d.

7. Шифрование: для сообщения m вычисляем c = m^e mod n.
8. Дешифрование: для зашифрованного сообщения c вычисляем m = c^d mod n.

*/

int main() {
    int prime_number_1 = 73;
    int prime_number_2 = 97;
    int prod_prime_num = prime_number_1 * prime_number_2;
    APowXModP( prod_prime_num, prime_number_1, prime_number_2 );
    int euler_function = ( prime_number_1 - 1 ) * ( prime_number_2 - 1 );
    
    return 0;
}