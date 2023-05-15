import math
def list(a):
	for i in range(a,0,-1):
		if a%i == 0: 
			print(i, end=' ')
	return
a = int(input())
a = abs(a)
if a>=1 and a<=100000: list(a)
else: print("INF")
