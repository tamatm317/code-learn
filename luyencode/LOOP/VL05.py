a = int(input())
sum = 0
for i in range(1,(3*a+1)+1):
	sum += pow(-1,i+1)*i
print(sum)