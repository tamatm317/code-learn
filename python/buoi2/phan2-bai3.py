import math
def list(a):
    x = int(math.sqrt(a))
    for i in range (1,x+1):
        print(pow(i,2), end=' ')
a = int(input())
list(a)