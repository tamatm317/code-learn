def tich_cac_so_tu_nhien(a):
    x = int(a/2)
    tich = 1
    for i in range (1,x+1):
        if a%i== 0: tich*=i
    tich = tich*a
    return tich
a = int(input())
print(tich_cac_so_tu_nhien(a))