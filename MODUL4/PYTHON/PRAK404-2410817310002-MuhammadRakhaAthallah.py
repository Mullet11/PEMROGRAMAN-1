while True:
    print("Pilih Program\n 1.Penjumlahan\n 2.Pengurangan\n 3.Perkalian\n 4.Pembagian\n 5.Exit")
    amba=int(input("masukkan Pilihan ="))
    if amba>5 or amba<0:
        print("Input anda salah, silahkan coba lagi")
        continue
    elif amba==5:
        print("Terima kasih, telah menggunakan kalkulator Muhammad Rakha' Athallah")
        break
    else:
        andre=float(input("Masukkan nilai pertama ="))
        joko=float(input("Masukkan nilai kedua ="))
        if amba==1:
            print("hasil penjumlahan antara %.2f dengan %.2f adalah %.2f"% (andre,joko, andre+joko))
        elif amba==2:
            print("hasil pengurangan antara %.2f dengan %.2f adalah %.2f"% (andre,joko, andre-joko))
        elif amba==3:
            print("hasil perkalian antara %.2f dengan %.2f adalah %.2f"% (andre,joko, andre*joko))
        elif amba==4:
            if joko!=0:
                 print("hasil pembagian antara %.2f dengan %.2f adalah %.2f"% (andre,joko, andre/joko))
            else:
                print("hasil tidak terdefinisi")