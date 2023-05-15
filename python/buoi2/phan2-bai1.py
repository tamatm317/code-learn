def sum_(a):
    sum = a
    for i in range(1,int(a/2)+1):
        if a%i==0: sum+=i
    return sum
a = int(input())
print(sum_(a))