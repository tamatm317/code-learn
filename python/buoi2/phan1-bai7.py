import math
a = int(input())
b = int(input())
c = int(input())
if a==0:
    if b==0 and c==0: print("INF")
    elif b==0 and c!=0: print("NO")
    else: print(round(-b/a,2))
else:
    denta = math.pow(b,2) - 4*a*c
    if denta < 0: print("NO")
    else:
        x1 = (-b+math.sqrt(denta))/(2*a)
        x2 = (-b - math.sqrt(denta)) / (2 * a)
        print(round(x1,2), round(x2,2))