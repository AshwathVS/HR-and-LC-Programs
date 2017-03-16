import math
a = input()
for i in range(0,a):
    x = input()
    y = math.pow(2,x) - 1
    y = y % (10000)
    print(int(y))
