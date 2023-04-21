import help_function
from Q3_gcd import gcd

def RSA(primeNumber1, primeNumber2):
    prodPrimeNum = primeNumber1 * primeNumber2
    eulerFunction = (primeNumber1 - 1) * (primeNumber2 - 1)
    comprimeWithEuler = help_function.find_coprime(eulerFunction)
    while gcd(eulerFunction, comprimeWithEuler) != 1:
        comprimeWithEuler += 1
    d = pow(comprimeWithEuler, -1) % eulerFunction
    print(f"Public key: ({comprimeWithEuler}, {prodPrimeNum})")
    print(f"Private key: {d}")
    message = input("Enter message to encrypt: ")
    length = len(message)
    encrypted = [0] * length
    for i in range(length):
        m = ord(message[i])
        encrypted[i] = pow(m, comprimeWithEuler, prodPrimeNum)
    print("Encrypted message: ", end='')
    for i in range(length):
        print(encrypted[i], end=' ')
    print()
    return 0