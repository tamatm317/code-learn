a = int(input())
if a<=0 or a > 100000: print("INVALID")
else:
	if a%4==0:
		if a%100==0 and a%400==0: print("YES")
		elif a%100==0 and a%400!=0: print("NO")
		else: print("YES")
	else: print("NO")