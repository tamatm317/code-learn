month, year = [int(x) for x in input().split()]
if year<=0 or year>100000 or month<=0 or month>12: print("INVALID")
else:
	if month==1 or month==3 or month==5 or month==7 or month==8 or month==10 or month==12:
		print("31")
	elif month==2:
		if year%4==0:
			if year%100==0 and year%400==0: print("29")
			elif year%100==0 and year%400!=0: print("28")
			else: print("29")
		else: print("28")
	else:
		print("30")