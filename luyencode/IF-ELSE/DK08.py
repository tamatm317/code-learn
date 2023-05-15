a,b,c = input().split()
a = float(a)
c = float(c)
if b == '+': print("{:.2f}".format(a+c))
elif b == '-': print("{:.2f}".format(a-c))
elif b == '*': print("{:.2f}".format(a*c))
elif b == '/':
	if c==0 : print("Math Error")
	else:  print("{:.2f}".format(a/c))