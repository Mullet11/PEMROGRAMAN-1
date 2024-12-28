r = float(input())
h = float(input())

volume = 22.0/7.0 * r **2 * h
luas = 2 * 22.0/7.0 * r * (r + h)
keliling = 2 * 22.0/7.0 * r

print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")

r1, h1 = map(float, input().split())

volume1 = 22.0/7.0 * r1 **2 * h1
luas1 = 2 * 22.0/7.0 * r1 * (r1 + h1)
keliling1 = 2 * 22.0/7.0 * r1

print(f"Volume = {volume1:.2f}")
print(f"Luas = {luas1:.2f}")
print(f"Keliling = {keliling1:.2f}")