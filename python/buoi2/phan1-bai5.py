a = int(input())
b=int(input())
c=int(input())
if a+b>c or a+c>b or b+c>a:
    if a==b and a==c: print("1")
    elif a==b or b==c or c==a: print("2")
    elif a*a+b*b==c*c or a*a+c*c==b*b or a*a+b*b==c*c: print("3")
    else: print("4")
else: print("INVALID")