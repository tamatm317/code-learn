import math
def prime(n):
	for i in range(2,int(math.sqrt(n))+1):
		if n%i==0: return 0
	return n>1
n = int(input())
if n<0: print("NO")
elif prime(n):print("YES")
else: print("NO")