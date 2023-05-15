import math
a = int(input('a = '))
b = int(input('b = '))
c = int(input('c = '))
delta = math.pow(b,2) - 4*a*c
if delta < 0 :
    print('Phương trình vô nghiệm')
else :
    if delta == 0 :
            x = -b/(2*a)
            print('x = ', x)
    else :

            delta = math.sqrt(delta)
            x1 = (-b+delta)/(2*a)
            x2 = (-b-delta)/(2*a)
            print('x1 = ', x1)
            print('x2 = ', x2)