n = int(input())
arr = int(input())   # takes the whole line of n numbers
l = list(map(int,arr.split(' '))) 
max = -10**9
for i in range(n):
    if arr[i]>max: max = arr[i];
print(max)