def divide3_5(x):
    if(x%3 == 0 or x%5 == 0):
        return x
def write(m,n):
    total = 0
    for i in range(m,n+1):
        if(divide3_5(i)):
            total += i
    return total

m = int(input('M = '))
n = int(input('N = '))
print(write(m,n))

