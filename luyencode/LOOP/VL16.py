def gcd(a,b):
	while(a*b!=0):
		if a>b: a%=b
		else: b%=a
	return a+b
def lcm(a,b):
	return (a*b)/gcd(a,b)
a,b = [int(x) for x in input().split()]
a = abs(a); b= abs(b)
print(int(lcm(a,b)))