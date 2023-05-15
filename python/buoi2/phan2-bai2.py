def sum_(a):
    count = 1;
    for i in range (1,int(a/2)+1):
        if a%i==0: count+=1
    print(count)
    for i in range (1,int(a/2)+1):
        if a%i==0: print(i, end=' ')
    print(a)
a = int(input())
sum_(a)
