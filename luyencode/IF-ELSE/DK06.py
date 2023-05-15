a,b = [int(x) for x in input().split()]
if a==0 and b==0: print("INF")
elif a==0 and b!=0: print("NO")
else: print("{:.2f}".format(-b/a))