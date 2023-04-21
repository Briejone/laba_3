def gcd(a: int, b: int) -> int:
    if a == 0:
        return b
    return gcd(b % a, a)