A,B = map(float, input().split())

C = (B * B - A * A) ** 0.5
keliling = A + B + C
luas = (A * C) / 2

print(f"Alas = {int(C)} cm") 
print(f"Tinggi = {int(A)} cm") 
print(f"Keliling = {int(keliling)} cm") 
print(f"Luas = {int(luas)} cm^2") 

A1 = float(input())
B1= float(input())

C1 = (B1 * B1 - A1 * A1) ** 0.5
keliling1 = A1 + B1 + C1
luas1 = (A1 * C1) / 2

print(f"Alas = {int(C1)} cm") 
print(f"Tinggi = {int(A1)} cm") 
print(f"Keliling = {int(keliling1)} cm") 
print(f"Luas = {int(luas1)} cm^2")