t = int(input())
n, k = map(int, input().split())
weights = list(map(int, input().split()))
smaller_weights = []

for _ in range(k):
    smallest = min(weights)
    smaller_weights.append(smallest)
    weights.remove(smallest)

print(sum(weights) - sum(smaller_weights))