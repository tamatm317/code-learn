n = int(input())
year = n/365
year = int(year)
temp = n%365
week = temp/7
week = int(week)
day = temp%7
print(year)
print(week)
print(day)