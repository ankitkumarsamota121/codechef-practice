t = int(input())
for _ in range(t):
    lst = list(map(int, input().split()))
    s = lst[0]
    bricks = lst[1:]
    n = s
    count_s = 0
    for i in bricks:
        if n - i >= 0:
            n = n-i
            continue
        else:
            n = s
            count_s += 1

    n = s
    count_r = 0
    for i in bricks:
        if n - i >= 0:
            n = n-i
            continue
        else:
            n = s
            count_r += 1

    count_r += 1
    count_s += 1
    print(min(count_r, count_s))
