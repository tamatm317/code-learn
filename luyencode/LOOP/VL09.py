x,n = [int(x) for x in input().split()]
giaithua = 1
sum = x
for i in range(2,n+1):
	giaithua*=i
	sum += pow(x,i)/(giaithua)
print("{:.2f}".format(sum))