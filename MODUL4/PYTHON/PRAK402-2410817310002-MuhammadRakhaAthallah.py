rizal = int(input())
for i in range (1, rizal) :
    if i % 2 != 0 :
        print(i, end=' ')
print("\n")
while rizal > 0 :
    if rizal % 2 == 0 :
        print(rizal, end=' ')
    rizal -= 1