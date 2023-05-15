def perfect(n):
	sum = 0
	for i in range(1,n//2+1):
		if(n%i==0): sum+=i
	if(sum==n): return 1
	else : return 0
a= int(input())
if a>0 and a <=1000000000:
	if(perfect(a)): print("YES")
	else: print("NO")
else: print("NO")