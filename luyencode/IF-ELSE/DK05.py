import math
a = int(input())
if a>=0:
	if int(math.sqrt(a))*int(math.sqrt(a))==a: print("YES")
	else: print("NO")
else:
	print("NO")