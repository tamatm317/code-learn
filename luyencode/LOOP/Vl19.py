a,b = [int(x) for x in input().split()]
count = 0
for i in range(b-1,a,-1):
	if(i%3==0):
		count+=1
		print(i, end =' ')
if(count==0): print("NOT FOUND")