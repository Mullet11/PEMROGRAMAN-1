a = int(input(""))

if a<0 or a>=100: print("Anda Menginput melebihi Limit Bilangan")
elif a==0: print("Nol")
elif 1<=a<=9: print("Satuan")
elif 11<=a<=19: print("belasan")
elif a==10 or a>=20 and a<=99: print("Puluhan")
else: print("Anda Menginput Melebihi Limit Bilangan")