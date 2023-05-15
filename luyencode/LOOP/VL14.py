def find(a,b):
	while(a*b!=0):
		if a>b: a%=b
		else : b%=a
	return a+b
a,b = [int(x) for x in input().split()]
a = abs(a); b=abs(b)
print(find(a,b))