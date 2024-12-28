a,b =input().split()
a=int(a)
b=int(b)
all_sum = 0
for n in range(a):
    res = 0
    for p in range(n, -1, -1):
        print(f"({p + 1} * {b})", end="")
        if p > 0:
            print(" + ", end="")
        res += (p + 1) * b
    print(f" = {res}")
    all_sum += res
print(all_sum)