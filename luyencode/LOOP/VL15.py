def find(a,b):
	while(a*b!=0):
		if a>b: a%=b
		else : b%=a
	return a+b
a,b = [int(x) for x in input().split()]
if a>1000 or a<-1000 or b>1000 or b<-1000: print("INVALID")
elif b == 0: print("INVALID")
elif a%b==0: print(a//b)
elif find(abs(a),abs(b))==1:
	if a>0 and b>0: print(a,b)
	else:
		if a<0 and b>0:print(a,b)
		elif a>0 and b<0: print(-a,-b)
		else: print(-a,-b)
else:
	if a*b<0 and b<0:
		x = find(a, abs(b))
		print("{:.0f}".format(-a/x),"{:.0f}".format(-b/x))
	elif a*b<0 and a<0:
		x = find(abs(a),b)
		print("{:.0f}".format(-a/x),"{:.0f}".format(b/x))
	else:
		print("{:.0f}".format(-a/find(abs(a),abs(b))),"{:.0f}".format(-b/find(abs(a),abs(b))))