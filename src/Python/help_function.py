import math 
from Q4_gcdExtended import gcdExtended

def find_coprime(a):
    for i in range(2, a):
        if math.gcd(i, a) == 1:
            return i
    return -1

def find_inverse(a, m):
    x, y = 0, 0
    gcd, x, y = gcdExtended(a, m, x, y)
    if gcd != 1:
        print("Inverse doesn't exist")
        return -1
    else:
        return (x % m + m) % m

def pow_mod_10(num, pow):
    num %= 10
    result = 1
    for i in range(pow):
        result *= num
        result %= 10