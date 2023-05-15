def factorial (n):
	sum = 1
	for i in range(1,n+1):
		sum*=i
	return sum
n,k = [int(x) for x in input().split()]
giaithua = factorial(n)/(factorial(k)*(factorial(n-k)))
print("{:.0f}".format(giaithua))
