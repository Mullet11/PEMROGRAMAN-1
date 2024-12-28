a, b = map(int, input().split())
if a != b:
    print("Jumlah tidak sama")
else:
    list_a = list(map(int, input().split()))
    list_b = list(map(int, input().split()))
    print(*[list_a[i] * list_b[i] for i in range(a)])