a= int(input())
b = int(input())
# print(a+b, a-b,  a*b,  round(a/b,2))
from decimal import*

getcontext().prec = a

print(Decimal(a)/Decimal(b))
