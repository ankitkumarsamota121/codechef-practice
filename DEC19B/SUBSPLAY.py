t = int(input())
while(t):
    n = int(input())
    s = input()
    rev_string = reversed(s)
    empty_s = ""

    for c in rev_string:
        if c in empty_s:
            break
        empty_s += c

    t-=1

print(n - len(empty_s))