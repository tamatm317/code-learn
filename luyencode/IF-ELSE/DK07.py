import math
a,b,c = [int(x) for x in input().split()]
if a==0:
	if b==0:
		if c==0: print("INF")
		else: print("NO")
	else: print("{:.2f}".format(-c/b))
else:
	delta = pow(b,2)-4*a*c
	if delta >0:
		x1 = (-b+math.sqrt(delta))/(2*a)
		x2 = (-b-math.sqrt(delta))/(2*a)
		if x1>x2: print("{:.2f}".format(x2),"{:.2f}".format(x1),)
		else: print("{:.2f}".format(x1),"{:.2f}".format(x2),) 
	elif delta == 0: print("{:.2f}".format(-b/(2*a)))
	else: print("NO")