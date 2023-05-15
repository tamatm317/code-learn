a = int(input('a = '))
n = 1; total = 1/a
while (1/(a*n) >= 0.0001):
    total += 1/(a*n)
    n+=1
print(total)
print(n)