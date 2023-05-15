a,b = input().split()
a = a.upper()
b = b.upper()
for i in range(ord(a),ord(b)+1):
	print(chr(i), end=' ')