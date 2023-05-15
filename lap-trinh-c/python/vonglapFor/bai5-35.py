import math
n = int(input('N = '))
x = int(input('X = '))
p = 0
for i in range(0,n+1):
    p += (i+1)*(math.pow(x,i))
print(p)