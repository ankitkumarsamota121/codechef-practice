t = int(input())


def binaryToDecimal(n):
    n = n[-1::-1]
    decimal = 0
    for i in range(len(n)):
        decimal += int(n[i]) * (2**i)
    return decimal


for _ in range(t):
    a = binaryToDecimal(input())
    b = binaryToDecimal(input())
    counter = 0
    while b>0:
        U = a ^ b
        V = a & b
        a = U
        b = V*2
        counter += 1
    print(counter)
