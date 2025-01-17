def extended_pgcd(a, b):
    if b == 0:
        return a, 1, 0
    gcd, x1, y1 = extended_pgcd(b, a % b)
    x = y1
    y = x1 - (a // b) * y1
    return gcd, x, y
print(extended_pgcd(20,10))