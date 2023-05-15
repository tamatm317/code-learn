def check(year):
    if year%4==0: return 1
    elif year%100==0 and year%400==0: return 1
    else: return 0
month = int(input())
year = int(input())
if month<=0 or month >12 or year <0: print("INVALID")
elif month ==1 or month==3 or month==5 or month==7 or month==8 or month==10 or month==12:
    print("31")
elif(month==2):
    if check(year): print("29")
    else: print("28")
else:
    print("30")