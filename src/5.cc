#include "main.h"
#include "./help_function/help_function.h"
/*
Шаги алгоритма RSA:
1. Выбрать два простых числа primeNumber1 и primeNumber2.
2. Вычислить их произведение prodPrimeNum = primeNumber1 * primeNumber2.
3. Вычислить функцию Эйлера f(prodPrimeNum) = (primeNumber1 - 1) * (primeNumber2 - 1).
4. Выбрать целое число comprimeWithEuler, взаимно простое с f(prodPrimeNum), такое что 1 < comprimeWithEuler < f(prodPrimeNum).
5. Вычислить число d, которое является обратным к comprimeWithEuler по модулю f(prodPrimeNum).
6. Открытый ключ - пара (comprimeWithEuler, prodPrimeNum), закрытый ключ - число d.
7. Шифрование: для сообщения m вычисляем c = m^comprimeWithEuler mod prodPrimeNum.
*/
int RSA(int primeNumber1, int primeNumber2) {//primeNumber1 and primeNumber2
    int prodPrimeNum = primeNumber1 * primeNumber2;
    int eulerFunction = (primeNumber1 - 1) * (primeNumber2 - 1);//f(prodPrimeNum)
    int comprimeWithEuler = find_coprime(eulerFunction);//find_coprime(eulerFunction);
    while (gcd(eulerFunction, comprimeWithEuler) != 1)
    {
        comprimeWithEuler++;
    }
    int d = fmod(pow(comprimeWithEuler, -1), eulerFunction);
    std::cout << "Public key: (" << comprimeWithEuler << ", " << prodPrimeNum << ")" << std::endl;
    std::cout << "Private key: " << d << std::endl;
    std::string message;
    std::cout << "Enter message to encrypt: ";
    getline(std::cin, message);
    int length = message.length();

    int encrypted[length];
    for (int i = 0; i < length; i++) {
        int m = int(message[i]);
        encrypted[i] = fmod(pow(m, comprimeWithEuler), prodPrimeNum);
    }
    std::cout << "Encrypted message: ";
    for (int i = 0; i < length; i++) {
        std::cout << encrypted[i] << " ";
    }
    std::cout << std::endl;

    return 0;

}