str1, str2 = input(), input()

if len(str1) != len(str2):
    print("Panjang kalimat berbeda, pesan palsu")
    exit(1)

char_sama = char_tidaksama = 0
str3 = ""

for a, b in zip(str1, str2):
    if a == b:
        str3 += '*'  
        char_sama += 1
    elif a != b:
        str3 += '#'
        char_tidaksama += 1
    else:
        str3 += ' '  

print(str3)
print(f"* = {char_sama}")
print(f"# = {char_tidaksama}")
print("Pesan Asli" if char_sama >= char_tidaksama else "Pesan Palsu")