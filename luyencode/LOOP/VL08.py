a,b = [int(x) for x in input().split()]
sum_even = 0
for i in range(a,b+1):
	if i%2==0: sum_even+=i
print(sum_even)