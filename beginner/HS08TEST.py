x, y = input().split()
a = int(x)
x = float(x)
balance = float(y)
y = float(y)

if not (a%5) and (x+0.5)<=y:
    balance -= (x+0.5)
print(f"{balance:.2f}")