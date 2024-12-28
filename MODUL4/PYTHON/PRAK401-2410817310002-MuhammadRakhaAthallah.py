rusdi, azril = input().split()
rusdi =int(rusdi)
for n in range(1, 51):
    if n%rusdi == 0:
        print(azril, end=' ')
    else :
        print(n, end=' ')