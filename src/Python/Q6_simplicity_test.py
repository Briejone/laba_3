import random
# Функция возведения в степень с помощью операции умножения
def power(base, exp, mod):
    result = 1
    while exp > 0:
        if exp % 2 == 1:
            result = (result * base) % mod
        base = (base * base) % mod
        exp = exp // 2
    return result

# Функция теста Миллера на простоту
def miller_rabin_test(n, k):
    # Обрабатываем угловые случаи
    if n <= 1:
        return False
    if n == 2 or n == 3:
        return True
    # Находим значения d и r
    d = n - 1
    r = 0
    while d % 2 == 0:
        d //= 2
        r += 1
    # Производим k итераций
    for i in range(k):
        # Генерируем случайное a в диапазоне [2, n-2] 
        a = 2 + random.randrange(n - 3)
        # Вычисляем x = a^d mod n
        x = power(a, d, n)
        if x == 1 or x == n-1: 
            continue
        is_composite = True
        for j in range(1, r):
            x = (x * x) % n
            if x == n-1:
                is_composite = False
                break
        if is_composite:
            return False
    return True