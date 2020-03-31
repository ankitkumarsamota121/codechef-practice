from math import factorial

t = int(input())
n = int(input())

a = input()
b = input()

zeroes_a = a.count('0')
zeroes_b = b.count('0')

ones_a = a.count('1')
ones_b = b.count('1')

output = (factorial(n)/(factorial(zeroes_a)*factorial(ones_a)))
output *= (factorial(n)/(factorial(zeroes_b)*factorial(ones_b)))

print(int(output%(1000000007)))