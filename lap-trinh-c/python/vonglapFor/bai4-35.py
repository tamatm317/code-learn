import math
n = 1; total = 0
while ( total < 300):
    total +=math.pow(n,2)
    if(total >=300):
        print(n)
        break;
    n+=1
