n = int(input())
b = list(map(int, input().split()))

print(*[b[i] * (i + 1) for i in range(n)])