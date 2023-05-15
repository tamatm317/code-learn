import math
def count(a):
	c = 0
	for i in range(1,int(math.sqrt(a))+1):
		if(a%i==0): c = c+ 2
		if(i*i==a):c = c -1
	return c
a = int(input())
print(int(count(abs(a))))