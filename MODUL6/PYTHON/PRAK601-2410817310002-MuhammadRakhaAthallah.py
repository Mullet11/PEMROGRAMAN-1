a, b = map(int, input().split())
Bilangan = list(map(int, input().split()))

for i in range(len(Bilangan)):
    print(Bilangan[i], end="\n" if (i + 1) % b == 0 else " ")