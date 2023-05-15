import math
# #s1
# a = int(input('Hay Nhap n: '))
# total = 0.0
# for i in range(1,a+1):
#     total += 1/i
# print(total)

#s2
# n = int(input('N = '))
# total = 0.0
# for i in range(1,n+1):
#     total += 1 /math.pow(i,3)
# print(total)

#s3
# n = int(input('N = '))
# total = 0.0
# for i in range(1, n+1):
#     total += i/(i+1)
# print(total)

#s4
n = int(input('N = '))
total = 0; factorial = 1.0
for i in range(1,n+1):
    factorial *= i
    total += 1/factorial
print(total)
