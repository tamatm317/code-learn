n = int(input('n = '))
total = 0;
for i in range(1,n+1):
    total += 1/i
print('S1 = ',total)

for j in range(5,0):
    print(j,end=' ')
total_1 = 0
for i in range(1,101):
    total_1 += i
print('S = ', total_1)